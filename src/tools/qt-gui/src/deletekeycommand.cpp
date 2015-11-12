#include "deletekeycommand.hpp"

DeleteKeyCommand::DeleteKeyCommand(TreeModel* model, const QModelIndex &index, QUndoCommand* parent)
	: QUndoCommand(parent)
	, m_model(model)
	, m_item(qvariant_cast<TreeItemPtr>(model->data(index, TreeModel::ItemRole)))
	, m_index(index)
	, m_isRoot(false)
{
	setText("Delete Key");

	if(!m_item->name().contains('/'))
	{
		m_isRoot = true;
		m_root = TreeItemPtr(new TreeItem(m_item->baseName(), m_item->name(), 0, qvariant_cast<TreeItemPtr>(model->data(index, TreeModel::RootRole))));
	}
}

void DeleteKeyCommand::undo()
{
	if(m_isRoot)
		m_model->removeRow(m_index.row(), m_index.parent());
	m_model->insertRow(m_index.row(), m_index.parent(), m_item);
//	m_model->refreshArrayNumbers();
//	m_model->refresh();
}

void DeleteKeyCommand::redo()
{
	m_model->removeRow(m_index.row(), m_index.parent());
	if(m_isRoot)
		m_model->insertRow(m_index.row(), m_index.parent(), m_root, false);
//	m_model->refreshArrayNumbers();
}
