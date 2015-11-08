#ifndef TREEITEM_HPP
#define TREEITEM_HPP

#include <QObject>
#include <kdb.hpp>
#include "metamodel.hpp"

class TreeItem : public QObject
{
	Q_OBJECT

public:
	explicit			TreeItem(const QString& baseName, const QString& name, const kdb::Key& key, TreeItem* parent);
						TreeItem(const TreeItem& other) {}
						TreeItem() {}

	QString				baseName() const;
	QString				name() const;
	QVariant			value() const;
	kdb::Key			key() const;

	TreeItem			*parent() const;
	TreeItem			*child(int row) const;
	TreeItem			*getChildByName(QString &name) const;

	int					childCount() const;
	int					columnCount() const;
	int					row() const;

	void				setBaseName(const QString &baseName);
	void				setName(const QString &name);
	void				setValue(const QVariant &value);
	void				setKey(const kdb::Key &key);
	void				setParent(TreeItem *parent);
	void				populateMetaModel();

	void				setIsDirty(bool value);
	void				appendChild(TreeItem *node);
	void				clear();

	bool				hasChild(const QString &name) const;
	bool				isDirty() const;
	bool				childrenAreLeaves() const;

	QList<TreeItem *>	children() const;

	MetaModel			*metaData() const;

private:
	QString				m_baseName;
	QString				m_name;
	QVariant			m_value;
	kdb::Key			m_key;

	QList<TreeItem*>	m_children;
	TreeItem*			m_parent;
	MetaModel*			m_metaData;
	bool				m_isDirty;
};

#endif // TREEITEM_HPP
