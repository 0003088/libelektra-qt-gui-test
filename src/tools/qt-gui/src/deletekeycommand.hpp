#ifndef DELETEKEYCOMMAND_HPP
#define DELETEKEYCOMMAND_HPP

#include <QUndoCommand>
#include "treemodel.hpp"

/**
 * @brief The DeleteKeyCommand class. Remembers a node for redo/undo.
 */
class DeleteKeyCommand : public QUndoCommand
{

public:
	/**
	 * @brief The command to delete a ConfigNode.
	 *
	 * @param type Declares if the ConfigNode is a single key or a branch.
	 * @param model The model that holds the ConfigNode that is deleted.
	 * @param index The index of the ConfigNode that is deleted.
	 * @param parent An optional parent command.
	 */
	explicit DeleteKeyCommand(TreeModel* model, const QModelIndex &index, QUndoCommand* parent = 0);

	virtual void undo();
	virtual void redo();

private:
	TreeModel*				m_model;
	TreeItemPtr				m_item;
	TreeItemPtr				m_root;
	int 					m_row;
	Path					m_index;
	bool					m_isRoot;
};

#endif // DELETEKEYCOMMAND_HPP
