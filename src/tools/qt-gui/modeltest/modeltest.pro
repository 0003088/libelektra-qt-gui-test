CONFIG += testcase
#TARGET = tst_modeltest
QT += widgets testlib
SOURCES         += modeltest.cpp dynamictreemodel.cpp
HEADERS         += modeltest.h dynamictreemodel.h



DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0
