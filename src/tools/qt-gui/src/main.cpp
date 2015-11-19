#include <QApplication>
#include <QtQml>
#include <QMetaType>
#include <QQmlApplicationEngine>
#include <QSortFilterProxyModel>
#include "treemodel.hpp"
#include "noleavesproxymodel.hpp"
#include "onlyleavesproxymodel.hpp"
#include "metamodel.hpp"
#include "undomanager.hpp"
#include "modeltest/modeltest.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	qRegisterMetaType<TreeModel>("TreeModel");
	qRegisterMetaType<MetaModel>("TreeItem");
	qRegisterMetaType<MetaModel>("MetaModel");
	qRegisterMetaType<UndoManager>("UndoManager");
	qmlRegisterType<DataContainer>("org.libelektra.qtgui", 1, 0, "DataContainer");

	QQmlApplicationEngine engine;
	QQmlContext* ctxt = engine.rootContext();

	TreeModel model;
	NoLeavesProxyModel treeFilter;
	OnlyLeavesProxyModel tableFilter;
	UndoManager manager;

	treeFilter.setSourceModel(&model);
	tableFilter.setSourceModel(&model);

	engine.setObjectOwnership(&treeFilter, QQmlApplicationEngine::CppOwnership);
	engine.setObjectOwnership(&tableFilter, QQmlApplicationEngine::CppOwnership);

	ctxt->setContextProperty("treeModel", &model);
	ctxt->setContextProperty("filteredTreeModel", &treeFilter);
	ctxt->setContextProperty("filteredTableModel", &tableFilter);
	ctxt->setContextProperty("undoManager", &manager);

	model.populateModel();

	new ModelTest(&model);
	new ModelTest(&treeFilter);
	new ModelTest(&tableFilter);

	engine.load(QUrl(QStringLiteral("qrc:/qml/main.qml")));

	return app.exec();
}

