#include "metamodel.hpp"

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

	if (index.row() > (m_model.size() - 1))
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

void MetaModel::append(MetaItem *item)
{
	beginInsertRows(QModelIndex(), m_model.count(), m_model.count());
	m_model.append(item);
	endInsertRows();
}

QHash<int, QByteArray> MetaModel::roleNames() const
{
	QHash<int, QByteArray> roles;

	roles[MetaNameRole] = "metaName";
	roles[MetaValueRole] = "metaValue";

	return roles;
}
