#include "editkeycommand.hpp"

EditKeyCommand::EditKeyCommand(TreeModel* model, const QModelIndex &index, DataContainer* data, QUndoCommand* parent)
	:  QUndoCommand(parent)
	, m_model(model)
	, m_index(index)
	, m_oldName(data->oldName())
	, m_oldValue(data->oldValue())
	, m_oldMetaData(data->oldMetadata())
	, m_newName(data->newName())
	, m_newValue(data->newValue())
	, m_newMetaData(data->newMetadata())
{
	setText("edit");
}

void EditKeyCommand::undo()
{
	if (m_index.isValid())
	{
		m_model->setData(m_index, m_oldName, TreeModel::BaseNameRole);
		m_model->setData(m_index, m_oldValue, TreeModel::ValueRole);
		m_model->setData(m_index, m_oldMetaData, TreeModel::MetaDataRole);
	}
}

void EditKeyCommand::redo()
{
	if (m_index.isValid())
	{
		m_model->setData(m_index, m_newName, TreeModel::BaseNameRole);
		m_model->setData(m_index, m_newValue, TreeModel::ValueRole);
		m_model->setData(m_index, m_newMetaData, TreeModel::MetaDataRole);
	}
}
