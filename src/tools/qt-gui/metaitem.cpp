#include "metaitem.hpp"

MetaItem::MetaItem()
{

}

QString MetaItem::metaName() const
{
	return m_metaName;
}

void MetaItem::setMetaName(const QString &metaName)
{
	m_metaName = metaName;
}

QVariant MetaItem::metaValue() const
{
	return m_metaValue;
}

void MetaItem::setMetaValue(const QVariant &metaValue)
{
	m_metaValue = metaValue;
}

