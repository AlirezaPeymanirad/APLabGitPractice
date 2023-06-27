QT       += core gui network
QMAKE_CXXFLAGS += -std=gnu++11
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    board.cpp \
    card.cpp \
    client.cpp \
    editprofile.cpp \
    forgotpass.cpp \
    game.cpp \
    main.cpp \
    mainwindow.cpp \
    menue.cpp \
    play.cpp \
    player.cpp \
    registery.cpp \
    role.cpp \
    server.cpp

HEADERS += \
    board.h \
    card.h \
    client.h \
    editprofile.h \
    forgotpass.h \
    game.h \
    mainwindow.h \
    menue.h \
    play.h \
    player.h \
    registery.h \
    role.h \
    server.h

FORMS += \
    editprofile.ui \
    forgotpass.ui \
    mainwindow.ui \
    menue.ui \
    play.ui \
    registery.ui \
    role.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc

DISTFILES +=
