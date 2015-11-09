#include <QApplication>
#include <QtQml>
#include <QMetaType>
#include <QQmlApplicationEngine>
#include <QSortFilterProxyModel>
#include "treemodel.hpp"
#include "noleavesproxymodel.hpp"
#include "metamodel.hpp"
//#include <modeltest.h>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	qRegisterMetaType<TreeModel>("TreeModel");
	qRegisterMetaType<MetaModel>("MetaModel");

	QQmlApplicationEngine engine;
	QQmlContext* ctxt = engine.rootContext();

	TreeModel model;
	NoLeavesProxyModel treeFilter;
	treeFilter.setSourceModel(&model);

//	new ModelTest(&model, this);

	engine.setObjectOwnership(&model, QQmlApplicationEngine::CppOwnership);

	ctxt->setContextProperty("treeModel", &model);
	ctxt->setContextProperty("filteredTreeModel", &treeFilter);

	model.populateModel();

	engine.load(QUrl(QStringLiteral("qrc:/qml/main.qml")));

	return app.exec();
}

