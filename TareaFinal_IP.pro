TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    interfaz/interfaz.cpp \
    logica/logica.cpp

HEADERS += \
    logica/logica.h \
    logica/datos.h \
    interfaz/interfaz.h

