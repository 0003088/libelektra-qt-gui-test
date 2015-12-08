#include "deletekeycommand.hpp"

DeleteKeyCommand::DeleteKeyCommand(TreeModel* model, const QModelIndex &index, QUndoCommand* parent)
	: QUndoCommand(parent)
	, m_model(model)
	, m_item(qvariant_cast<TreeItemPtr>(model->data(index, TreeModel::ItemRole)))
	, m_index(m_model->pathFromIndex(index.parent()))
	, m_isRoot(false)
	, m_row(index.row())
{
	setText("Delete Key");

	qDebug() << index << ", " << m_index;

	if(!m_item->name().contains('/'))
	{
		m_isRoot = true;
		m_root = TreeItemPtr(new TreeItem(m_item->baseName(), m_item->name(), 0, qvariant_cast<TreeItemPtr>(model->data(index, TreeModel::RootRole))));
	}
}

void DeleteKeyCommand::undo()
{
	QModelIndex index = m_model->pathToIndex(m_index);

	qDebug() << "index " << index;

	if (index.isValid())
	{
//		if(m_isRoot)
//			m_model->removeRow(index.row(), index);

		QList<TreeItemPtr> items;
		items.append(TreeItemPtr(new TreeItem(*m_item.data())));
		m_model->setItemsToInsert(items);

		m_model->insertRows(m_row, items.count(), index);
		//	m_model->refreshArrayNumbers();
		//	m_model->refresh();
	}
}

void DeleteKeyCommand::redo()
{
	QModelIndex index = m_model->pathToIndex(m_index);

	qDebug() << "index " << index;

	if (index.isValid())
	{
		m_model->removeRow(m_row, index);
		if(m_item->parent())
			qDebug() << "parent " << m_item->parent()->name();
//		if(m_isRoot)
//			m_model->insertRow(index.row(), index.parent(), m_root, false);
		//	m_model->refreshArrayNumbers();
	}
}
