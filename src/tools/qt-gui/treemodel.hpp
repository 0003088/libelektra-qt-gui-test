#ifndef TREEMODEL_HPP
#define TREEMODEL_HPP

#include <QAbstractItemModel>
#include <QModelIndex>
#include <QVariant>
#include <QDebug>
#include "treeitem.hpp"

class TreeModel : public QAbstractItemModel
{
	Q_OBJECT

public:
	enum TreeModelRoles
	{
		BaseNameRole = Qt::UserRole + 1,
		NameRole,
		ValueRole,
		ChildrenRole,
		ParentRole,
		ChildCountRole,
		ChildrenAreLeavesRole,
		RootRole,
		IsNullRole,
		MetaDataRole
	};

	explicit TreeModel(QObject *parent = 0);
	TreeModel(const TreeModel &other) {Q_UNUSED(other)}

	QModelIndex				index(int row, int column, const QModelIndex &parent = QModelIndex()) const;
	QModelIndex				parent(const QModelIndex &index) const;
	int						rowCount(const QModelIndex &parent = QModelIndex()) const;
	int						columnCount(const QModelIndex &parent = QModelIndex()) const;
	QVariant				data(const QModelIndex &index, int role) const;
	QHash<int, QByteArray>	roleNames() const;
//	Qt::ItemFlags			flags(const QModelIndex &index) const;

	void					sink(TreeItem *item, QStringList keys, const kdb::Key &key);
	void					populateModel(const kdb::KeySet &keySet);
	void					populateModel();
	void					createNewNodes(kdb::KeySet keySet);
	QStringList				getSplittedKeyname(const kdb::Key &key);

private:
	TreeItem				*m_rootItem;
	kdb::KDB				m_kdb;
	TreeItem				*getItem(const QModelIndex &index) const;
};

Q_DECLARE_METATYPE(TreeModel)

#endif // TREEMODEL_HPP
