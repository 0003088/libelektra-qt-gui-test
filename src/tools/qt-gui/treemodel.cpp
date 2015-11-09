#include "treemodel.hpp"
#include <kdbproposal.h> // for namespaces
#include <kdbconfig.h> // for DEBUG and VERBOSE

using namespace std;
using namespace kdb;
//using namespace kdb::tools;
//using namespace kdb::tools::merging;

TreeModel::TreeModel(QObject *parent) : QAbstractItemModel(parent)
{
	m_rootItem = TreeItemPtr(new TreeItem("root", "root", 0, TreeItemPtr(NULL)));
}

QModelIndex TreeModel::index(int row, int column, const QModelIndex &parent) const
{
	if (!hasIndex(row, column, parent))
		return QModelIndex();

	TreeItem* parentItem = getItem(parent);
	TreeItemPtr childItem = parentItem->child(row);

	if (childItem)
		return createIndex(row, column, childItem.data());
	else
		return QModelIndex();
}

QModelIndex TreeModel::parent(const QModelIndex &index) const
{
	if (!index.isValid())
		return QModelIndex();

	TreeItem* childItem = getItem(index);
	TreeItemPtr parentItem = childItem->parent();

	if(parentItem == m_rootItem)
		return QModelIndex();

	return createIndex(parentItem->childCount(), 0, parentItem.data());
}

int TreeModel::rowCount(const QModelIndex &parent) const
{
	TreeItem* parentItem = getItem(parent);

	return parentItem->childCount();
}

int TreeModel::columnCount(const QModelIndex &parent) const
{
	return m_rootItem->columnCount();
}

QVariant TreeModel::data(const QModelIndex &index, int role) const
{
	if (!index.isValid())
	{
		return QVariant();
	}

	TreeItem* item = getItem(index);

	switch (role)
	{
	case BaseNameRole:
		return QVariant::fromValue(item->baseName());

	case NameRole:
		return QVariant::fromValue(item->name());

	case ValueRole:
		return QVariant::fromValue(item->value());

	case ChildrenRole:
		return QVariant::fromValue(item->children());

	case ParentRole:
		return QVariant::fromValue(item->parent());

	case ChildCountRole:
		return QVariant::fromValue(item->childCount());

	case ChildrenAreLeavesRole:
		return QVariant::fromValue(item->childrenAreLeaves());

	case RootRole:
		return QVariant::fromValue(m_rootItem);

	case IsNullRole: {
		if(item->key())
			return QVariant::fromValue(false);
		return QVariant::fromValue(true);
	}

	case MetaDataRole:
		return QVariant::fromValue(item->metaData());

	default:
		return QVariant();
	}
}

void TreeModel::populateModel()
{
	try
	{
		kdb::KeySet config;
		m_kdb.get(config, "/");
		populateModel(config);
	}
	catch(kdb::KDBException const& e)
	{
		//emit showMessage(QObject::tr("Error"), QObject::tr("Populating model failed, could not read from configuration."), e.what());
		//throw;
	}
}

void TreeModel::populateModel(KeySet const & keySet)
{
	//	GUIBasicKeySet::setBasic(keySet);

	m_rootItem->clear();

	using namespace ckdb; // for namespaces

	for (int i=KEY_NS_FIRST; i<=KEY_NS_LAST; ++i)
	{
		elektraNamespace ns = static_cast<elektraNamespace>(i);
		TreeItemPtr toAdd;

		switch (ns)
		{
		case KEY_NS_SPEC:
			toAdd = TreeItemPtr(new TreeItem("spec", "spec", 0, m_rootItem));
			break;
		case KEY_NS_PROC:
			// TODO: add generic commandline parsing
			break;
		case KEY_NS_DIR:
			toAdd = TreeItemPtr(new TreeItem("dir", "dir", 0, m_rootItem));
			break;
		case KEY_NS_USER:
			toAdd = TreeItemPtr(new TreeItem("user", "user", 0, m_rootItem));
			break;
		case KEY_NS_SYSTEM:
			toAdd = TreeItemPtr(new TreeItem("system", "system", 0, m_rootItem));
			break;
		case KEY_NS_EMPTY:
			break;
		case KEY_NS_NONE:
			break;
		case KEY_NS_META:
			break;
		case KEY_NS_CASCADING:
			break;
		}
		if (toAdd)
		{
			m_rootItem->appendChild(toAdd);
		}

	}

	createNewNodes(keySet);
}

void TreeModel::createNewNodes(KeySet keySet)
{
	keySet.rewind();

	while (keySet.next())
	{
		Key k = keySet.current();
		QStringList keys = getSplittedKeyname(k);
		QString rootString = keys.takeFirst();

		for(int i = 0; i < m_rootItem->childCount(); i++)
		{
			if(rootString == m_rootItem->child(i)->baseName())
				sink(m_rootItem->child(i), keys, k);
		}
	}
}

void TreeModel::sink(TreeItemPtr item, QStringList keys, const Key& key)
{
	if (keys.length() == 0)
		return;

	bool isLeaf = (keys.length() == 1);

	QString baseName =  keys.takeFirst();

	if (item->hasChild(baseName))// && !item->getChildByName(baseName)->isDirty())
	{
		sink(item->getChildByName(baseName), keys, key);
	}
	else
	{
		//		if(item->hasChild(name))
		//			item->children()->removeRow(item->getChildIndexByName(name));//TODO

		TreeItemPtr newNode;

		if(isLeaf)
			newNode = TreeItemPtr(new TreeItem(baseName, (item->name() + "/" + baseName), key, item));
		else
			newNode = TreeItemPtr(new TreeItem(baseName, (item->name() + "/" + baseName), NULL, item));

		item->appendChild(newNode);

		sink(newNode, keys, key);
	}
}

QStringList TreeModel::getSplittedKeyname(const Key &key)
{
	QStringList names;

	for (Key::iterator i = key.begin(); i != key.end(); ++i)
	{
		names.append(QString::fromStdString(*i));
	}

	return names;
}

TreeItem* TreeModel::getItem(const QModelIndex &index) const
{
	if (index.isValid()) {
		TreeItem* item = static_cast<TreeItem*>(index.internalPointer());

		if (item)
			return item;
	}

	return m_rootItem.data();
}

QHash<int, QByteArray> TreeModel::roleNames() const
{
	QHash<int, QByteArray> roles;

	roles[BaseNameRole] = "baseName";
	roles[NameRole] = "name";
	roles[ValueRole] = "value";
	roles[ChildrenRole] = "children";
	roles[ParentRole] = "parent";
	roles[ChildCountRole] = "childCount";
	roles[ChildrenAreLeavesRole] = "childrenAreLeaves";
	roles[RootRole] = "root";
	roles[IsNullRole] = "isNull";
	roles[MetaDataRole] = "metaData";
	qDebug() << "BaseNameRole" << BaseNameRole;
	return roles;
}

