TEMPLATE = app

QT += qml quick
CONFIG += c++11

SOURCES += main.cpp \
    model.cpp \
    filter.cpp \
    dataitem.cpp \
    datamanager.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

OTHER_FILES += *.qml

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    model.h \
    filter.h \
    dataitem.h \
    datamanager.h
