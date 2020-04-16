/****************************************************************************
** Meta object code from reading C++ file 'g_animaux.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../LaFerme/g_animaux.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'g_animaux.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_G_animaux_t {
    QByteArrayData data[14];
    char stringdata0[338];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_G_animaux_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_G_animaux_t qt_meta_stringdata_G_animaux = {
    {
QT_MOC_LITERAL(0, 0, 9), // "G_animaux"
QT_MOC_LITERAL(1, 10, 11), // "HomeClicked"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 26), // "on_pushButton_home_clicked"
QT_MOC_LITERAL(4, 50, 28), // "on_pushButton_retour_clicked"
QT_MOC_LITERAL(5, 79, 30), // "on_pushButton_retour_2_clicked"
QT_MOC_LITERAL(6, 110, 25), // "on_pushButton_ani_clicked"
QT_MOC_LITERAL(7, 136, 27), // "on_pushButton_abris_clicked"
QT_MOC_LITERAL(8, 164, 33), // "on_pushButton_ajouter_ouv_cli..."
QT_MOC_LITERAL(9, 198, 34), // "on_pushButton_modifier_ani_cl..."
QT_MOC_LITERAL(10, 233, 29), // "on_pushButton_sup_ani_clicked"
QT_MOC_LITERAL(11, 263, 37), // "on_lineEdit_recherche_ani_tex..."
QT_MOC_LITERAL(12, 301, 4), // "arg1"
QT_MOC_LITERAL(13, 306, 31) // "on_pushButton_trier_ani_clicked"

    },
    "G_animaux\0HomeClicked\0\0"
    "on_pushButton_home_clicked\0"
    "on_pushButton_retour_clicked\0"
    "on_pushButton_retour_2_clicked\0"
    "on_pushButton_ani_clicked\0"
    "on_pushButton_abris_clicked\0"
    "on_pushButton_ajouter_ouv_clicked\0"
    "on_pushButton_modifier_ani_clicked\0"
    "on_pushButton_sup_ani_clicked\0"
    "on_lineEdit_recherche_ani_textChanged\0"
    "arg1\0on_pushButton_trier_ani_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_G_animaux[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    1,   78,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,

       0        // eod
};

void G_animaux::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<G_animaux *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->HomeClicked(); break;
        case 1: _t->on_pushButton_home_clicked(); break;
        case 2: _t->on_pushButton_retour_clicked(); break;
        case 3: _t->on_pushButton_retour_2_clicked(); break;
        case 4: _t->on_pushButton_ani_clicked(); break;
        case 5: _t->on_pushButton_abris_clicked(); break;
        case 6: _t->on_pushButton_ajouter_ouv_clicked(); break;
        case 7: _t->on_pushButton_modifier_ani_clicked(); break;
        case 8: _t->on_pushButton_sup_ani_clicked(); break;
        case 9: _t->on_lineEdit_recherche_ani_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_pushButton_trier_ani_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (G_animaux::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&G_animaux::HomeClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject G_animaux::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_G_animaux.data,
    qt_meta_data_G_animaux,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *G_animaux::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *G_animaux::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_G_animaux.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int G_animaux::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void G_animaux::HomeClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
