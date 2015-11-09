#ifndef METAITEM_HPP
#define METAITEM_HPP

#include <QVariant>
#include <QString>

class MetaItem
{
public:
	MetaItem();

	QString		metaName() const;
	QVariant	metaValue() const;
	void		setMetaName(const QString &metaName);
	void		setMetaValue(const QVariant &metaValue);

private:
	QString		m_metaName;
	QVariant	m_metaValue;
};

#endif // METAITEM_HPP
