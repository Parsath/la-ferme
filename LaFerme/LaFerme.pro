QT       += core gui sql
QT += widgets multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.

SOURCES += \
    animaux.cpp \
    conges.cpp \
    connexion.cpp \
    g_animaux.cpp \
    g_ouvriers.cpp \
    main.cpp \
    mainwindow.cpp \
    materiels.cpp \
    materiels_a.cpp \
    materiels_e.cpp \
    ouvriers.cpp

HEADERS += \
    animaux.h \
    conges.h \
    connexion.h \
    g_animaux.h \
    g_ouvriers.h \
    mainwindow.h \
    materiels.h \
    materiels_a.h \
    materiels_e.h \
    ouvriers.h

FORMS += \
    g_animaux.ui \
    mainwindow.ui \
    materiels.ui \
    ouvriers.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ressources.qrc
