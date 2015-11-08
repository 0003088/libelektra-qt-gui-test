TEMPLATE = app

QT += quick  gui core  qml  widgets testlib

SOURCES += main.cpp \
	treemodel.cpp \
	treeitem.cpp \
	metamodel.cpp \
    noleavesproxymodel.cpp \
    metaitem.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
	treemodel.hpp \
	treeitem.hpp \
	metamodel.hpp \
    noleavesproxymodel.hpp \
    metaitem.hpp

unix: LIBS += -L/usr/local/lib/ -lelektra
unix: LIBS += -L/usr/local/lib/ -lelektratools
unix: LIBS += -L/usr/local/lib/ -lmarkdown

INCLUDEPATH += /usr/local/include/elektra
INCLUDEPATH += src/markdownconverter
INCLUDEPATH += ../../libtools/include/
INCLUDEPATH += ../../libtools/include/merging
INCLUDEPATH += ../../include/

#include(modeltest.pro)

