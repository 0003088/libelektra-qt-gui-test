#include <QUndoStack>
#include "undomanager.hpp"
#include "editkeycommand.hpp"
#include "deletekeycommand.hpp"
//#include "newkeycommand.hpp"
//#include "copykeycommand.hpp"
//#include "cutkeycommand.hpp"
//#include "importconfigurationcommand.hpp"

UndoManager::UndoManager(QObject* parentManager) :
	QObject(parentManager)
  , m_undoStack(new QUndoStack(this))
  , m_clipboardEmpty(true)
{
	connect(m_undoStack, SIGNAL(canRedoChanged(bool)), this, SIGNAL(canRedoChanged()));
	connect(m_undoStack, SIGNAL(canUndoChanged(bool)), this, SIGNAL(canUndoChanged()));
	connect(m_undoStack, SIGNAL(redoTextChanged(QString)), this, SIGNAL(redoTextChanged()));
	connect(m_undoStack, SIGNAL(undoTextChanged(QString)), this, SIGNAL(undoTextChanged()));

	m_clipboard = QApplication::clipboard();
}

bool UndoManager::canUndo() const
{
	return m_undoStack->canUndo();
}

bool UndoManager::canRedo() const
{
	return m_undoStack->canRedo();
}

void UndoManager::createEditKeyCommand(TreeModel* model, const QModelIndex &index, DataContainer* data)
{
	m_undoStack->push(new EditKeyCommand(model, index, data));
}

void UndoManager::createDeleteKeyCommand(TreeModel* model, const QModelIndex &index)
{
	m_undoStack->push(new DeleteKeyCommand(model, index));
}

void UndoManager::createNewKeyCommand(const QModelIndex &index, DataContainer* data, bool isBelow)
{
//	m_undoStack->push(new NewKeyCommand(model, idx, data, isBelow));
}

void UndoManager::createCopyKeyCommand(const QModelIndex &index)
{
//	m_undoStack->push(new CopyKeyCommand(m_clipboardType, qvariant_cast<ConfigNodePtr>(m_clipboard->property("source")), model->model().at(idx)));
}

void UndoManager::createCutKeyCommand(const QModelIndex &index)
{
//	m_undoStack->push(new CutKeyCommand(m_clipboardType, qvariant_cast<ConfigNodePtr>(m_clipboard->property("source")), model->model().at(idx), m_clipboard->property("index").toInt()));
}

void UndoManager::createImportConfigurationCommand(const QModelIndex &index, DataContainer* data)
{
//	m_undoStack->push(new ImportConfigurationCommand(model, idx, data));
}

void UndoManager::setClean()
{
	m_undoStack->setClean();
}

bool UndoManager::isClean() const
{
	return m_undoStack->isClean();
}

bool UndoManager::canPaste() const
{
	return !m_clipboardEmpty;
}

int UndoManager::index() const
{
	return m_undoStack->index();
}

int UndoManager::cleanIndex() const
{
	return m_undoStack->cleanIndex();
}

int UndoManager::count() const
{
	return m_undoStack->count();
}

void UndoManager::setIndex(int idx)
{
	m_undoStack->setIndex(idx);
}

void UndoManager::undo()
{
	m_undoStack->undo();
}

void UndoManager::redo()
{
	m_undoStack->redo();
}

QString UndoManager::undoText() const
{
	return m_undoStack->undoText();
}

QString UndoManager::clipboardType() const
{
	return m_clipboardType;
}

void UndoManager::putToClipboard(const QString& type, const QModelIndex &index)
{
//	m_clipboardType = type;

//	m_clipboard->clear();

//	m_clipboard->setProperty("source", QVariant::fromValue(model->model().at(idx)));
//	m_clipboard->setProperty("index", QVariant::fromValue(idx));

//	m_clipboardEmpty = false;

//	emit clipboardTypeChanged();
//	emit canPasteChanged();
}

QString UndoManager::redoText() const
{
	return m_undoStack->redoText();
}
