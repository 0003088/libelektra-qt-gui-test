#include "metamodel.hpp"
#include <QDebug>

MetaModel::MetaModel(const QObject *parent)
{
}

int MetaModel::rowCount(const QModelIndex &parent) const
{
	return m_model.count();
}

QVariant MetaModel::data(const QModelIndex &index, int role) const
{
	if (!index.isValid())
	{
		return QVariant();
	}

	MetaItem* item = m_model.at(index.row());

	switch (role)
	{
	case MetaNameRole:
		return QVariant::fromValue(item->metaName());

	case MetaValueRole:
		return QVariant::fromValue(item->metaValue());

	default:
		return QVariant();
	}
}

void MetaModel::clear()
{
	beginResetModel();
	m_model.clear();
	endResetModel();
}

void MetaModel::insertRow(int row, MetaItem *item)
{
	beginInsertRows(QModelIndex(), row, row);
	m_model.insert(row, item);
	endInsertRows();
}

QVariantMap MetaModel::get(const int& idx) const
{
	QVariantMap map;

	foreach (int k, roleNames().keys())
	{
		map[roleNames().value(k)] = data(index(idx, 0), k);
	}

	return map;
}

QHash<int, QByteArray> MetaModel::roleNames() const
{
	QHash<int, QByteArray> roles;

	roles[MetaNameRole] = "metaName";//257
	roles[MetaValueRole] = "metaValue";

	return roles;
}
