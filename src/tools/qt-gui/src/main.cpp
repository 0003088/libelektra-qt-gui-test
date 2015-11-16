#include <QApplication>
#include <QtQml>
#include <QMetaType>
#include <QQmlApplicationEngine>
#include <QSortFilterProxyModel>
#include "treemodel.hpp"
#include "noleavesproxymodel.hpp"
#include "metamodel.hpp"
#include "undomanager.hpp"
//#include <modeltest.h>

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
	UndoManager manager;

	treeFilter.setDynamicSortFilter(true);
	treeFilter.setSourceModel(&model);

//	new ModelTest(&model, this);

	engine.setObjectOwnership(&model, QQmlApplicationEngine::CppOwnership);

	ctxt->setContextProperty("treeModel", &model);
	ctxt->setContextProperty("filteredTreeModel", &treeFilter);
	ctxt->setContextProperty("undoManager", &manager);

	model.populateModel();

	engine.load(QUrl(QStringLiteral("qrc:/qml/main.qml")));

	return app.exec();
}

