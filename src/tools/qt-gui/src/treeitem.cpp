#include "treeitem.hpp"
#include <QDebug>

TreeItem::TreeItem(const QString &baseName, const QString &name, const kdb::Key &key, TreeItemPtr parent)
	: m_baseName(baseName)
	, m_name(name)
	, m_key(key)
	, m_parent(parent)
	, m_isDirty(false)
{
	if (m_key && m_key.isString())
		m_value = QVariant::fromValue(QString::fromStdString(m_key.getString()));
	else if (m_key && m_key.isBinary())
		m_value = QVariant::fromValue(QString::fromStdString(m_key.getBinary()));

	if(m_key)
	{
		m_metaData = new MetaModel;
		populateMetaModel();
	}
}

QString TreeItem::baseName() const
{
	return m_baseName;
}

void TreeItem::setBaseName(const QString &baseName)
{
	m_baseName = baseName;
}

QString TreeItem::name() const
{
	return m_name;
}

void TreeItem::setName(const QString &name)
{
	m_name = name;
}

QVariant TreeItem::value() const
{
	return m_value;
}

void TreeItem::setValue(const QVariant &value)
{
	m_value = value;
}

void TreeItem::setMetaData(const QVariantMap &metaData)
{
	qDebug() << "List" << metaData;
	for(QVariantMap::const_iterator iter = metaData.begin(); iter != metaData.end(); iter++) {
		MetaItem* metaItem = new MetaItem(iter.key(), iter.value());
		m_metaData->insertRow(m_metaData->rowCount(), metaItem);
	}
}

kdb::Key TreeItem::key() const
{
	return m_key;
}

void TreeItem::setKey(const kdb::Key &key)
{
	m_key = key;
}

QList<TreeItemPtr> TreeItem::children() const
{
	return m_children;
}

MetaModel *TreeItem::metaData() const
{
	return m_metaData;
}

TreeItemPtr TreeItem::parent() const
{
	return m_parent;
}

void TreeItem::setParent(TreeItemPtr parent)
{
	m_parent = parent;
}

TreeItemPtr TreeItem::child(int row) const
{
	if(row < m_children.count())
		return m_children.at(row);

	return TreeItemPtr();
}

int TreeItem::childCount() const
{
	return m_children.count();
}

int TreeItem::columnCount() const
{
	return 1;
}

int TreeItem::row() const
{
	if (m_parent)
		return m_parent->m_children.indexOf(TreeItemPtr(const_cast<TreeItem*>(this)));

	return 0;
}

bool TreeItem::hasChild(const QString& name) const
{
	if(childCount() > 0)
	{
		foreach (TreeItemPtr node, m_children)
		{
			if (node->baseName() == name)
			{
				return true;
			}

		}

	}

	return false;
}

TreeItemPtr TreeItem::getChildByName(QString& name) const
{
	if(childCount() > 0)
	{
		foreach (TreeItemPtr node, m_children)
		{
			if (node->baseName() == name)
			{
				return node;
			}

		}

	}

	return TreeItemPtr();
}

bool TreeItem::isDirty() const
{
	return m_isDirty;
}

bool TreeItem::childrenAreLeaves() const
{
	foreach(TreeItemPtr item, m_children)
	{
		if(item->childCount() > 0)
			return false;
	}

	return true;
}

void TreeItem::setIsDirty(bool value)
{
	m_isDirty = value;
}

void TreeItem::appendChild(TreeItemPtr child)
{
	m_children.append(child);
}

void TreeItem::clear()
{
	m_children.clear();
}

void TreeItem::populateMetaModel()
{
	if (m_key)
	{
		m_key.rewindMeta();
		m_metaData->clear();

		while (m_key.nextMeta())
		{
			MetaItem* item = new MetaItem(QString::fromStdString(m_key.currentMeta().getName()), QVariant::fromValue(QString::fromStdString(m_key.currentMeta().getString())));
			m_metaData->insertRow(m_metaData->rowCount(), item);
		}
	}
}

