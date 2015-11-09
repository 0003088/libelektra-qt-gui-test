TEMPLATE = app

QT += quick  gui core  qml  widgets testlib

HEADERS +=	$$files(src/*.hpp)

SOURCES +=	$$files(src/*.cpp,true)

CONFIG += qml_debug

RESOURCES += qml.qrc

OTHER_FILES +=	$$PWD/qml/*.qml

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

unix: LIBS += -L/usr/local/lib/ -lelektra
unix: LIBS += -L/usr/local/lib/ -lelektratools
unix: LIBS += -L/usr/local/lib/ -lmarkdown

INCLUDEPATH += /usr/local/include/elektra
INCLUDEPATH += src/markdownconverter
INCLUDEPATH += ../../libtools/include/
INCLUDEPATH += ../../libtools/include/merging
INCLUDEPATH += ../../include/

#include(modeltest.pro)

