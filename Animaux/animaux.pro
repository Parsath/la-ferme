QT       += core gui sql network
QT += widgets multimedia printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = smtp
TEMPLATE = app

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.

SOURCES += \
    ajouteranimal.cpp \
    connexion.cpp \
    fenetreanimaux.cpp \
    gestionanimal.cpp \
    main.cpp \
    modifieranimal.cpp \
    smtp.cpp

HEADERS += \
    ajouteranimal.h \
    connexion.h \
    fenetreanimaux.h \
    gestionanimal.h \
    modifieranimal.h \
    smtp.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
