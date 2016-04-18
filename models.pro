TEMPLATE = app

QT += qml quick
CONFIG += c++11

SOURCES += main.cpp \
    model.cpp \
    datamanager.cpp \
    filter.cpp \
    entity.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

OTHER_FILES += *.qml

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    model.h \
    datamanager.h \
    filter.h \
    entity.h
