#ifndef METAMODEL_HPP
#define METAMODEL_HPP

#include <QObject>
#include <QAbstractListModel>
#include "metaitem.hpp"

class MetaModel : public QAbstractListModel
{
	Q_OBJECT

public:
	enum TreeModelRoles
	{
		MetaNameRole = Qt::UserRole + 1,
		MetaValueRole
	};

	explicit MetaModel(const QObject* parent = 0);
	MetaModel(const MetaModel &other) {Q_UNUSED(other)}

	int												rowCount(const QModelIndex &parent = QModelIndex()) const;
	QVariant										data(const QModelIndex &index, int role = Qt::DisplayRole) const;
	void											clear();
	void											insertRow(int row, MetaItem *item);
	QHash<int, QByteArray>							roleNames() const;
	Q_INVOKABLE				QVariantMap				get(const int &idx) const;

private:
	QList<MetaItem*> m_model;
};

Q_DECLARE_METATYPE(MetaModel)

#endif // METAMODEL_HPP
