#ifndef TREEITEM_HPP
#define TREEITEM_HPP

#include <QObject>
#include <kdb.hpp>
#include <QSharedPointer>
#include "metamodel.hpp"

class TreeItem : public QObject
{
	Q_OBJECT

public:
	explicit			TreeItem(const QString& baseName, const QString& name, const kdb::Key& key, QSharedPointer<TreeItem> parent);
						TreeItem(const TreeItem& other) {}
						TreeItem() {}

	QString								baseName() const;
	QString								name() const;

	QVariant							value() const;

	kdb::Key							key() const;

	QSharedPointer<TreeItem>			parent() const;
	QSharedPointer<TreeItem>			child(int row) const;
	QSharedPointer<TreeItem>			getChildByName(QString &name) const;

	int									childCount() const;
	int									columnCount() const;
	int									row() const;

	void								setBaseName(const QString &baseName);
	void								setName(const QString &name);
	void								setValue(const QVariant &value);
	void								setMetaData(const QVariantList &metaData);
	void								setKey(const kdb::Key &key);
	void								setParent(QSharedPointer<TreeItem> parent);
	void								populateMetaModel();
	void								setIsDirty(bool value);
	void								appendChild(QSharedPointer<TreeItem> child);
	void								clear();

	bool								hasChild(const QString &name) const;
	bool								isDirty() const;
	bool								childrenAreLeaves() const;

	QList<QSharedPointer<TreeItem> >	children() const;

	MetaModel							*metaData() const;

private:
	QString								m_baseName;
	QString								m_name;
	QVariant							m_value;
	kdb::Key							m_key;

	QList<QSharedPointer<TreeItem> >	m_children;
	QSharedPointer<TreeItem>			m_parent;
	MetaModel*							m_metaData;
	bool								m_isDirty;
};

typedef QSharedPointer<TreeItem> TreeItemPtr;

#endif // TREEITEM_HPP
