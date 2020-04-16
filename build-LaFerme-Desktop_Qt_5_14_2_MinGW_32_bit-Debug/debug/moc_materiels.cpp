/****************************************************************************
** Meta object code from reading C++ file 'materiels.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../LaFerme/materiels.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'materiels.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Materiels_t {
    QByteArrayData data[19];
    char stringdata0[473];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Materiels_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Materiels_t qt_meta_stringdata_Materiels = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Materiels"
QT_MOC_LITERAL(1, 10, 11), // "HomeClicked"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 26), // "on_pushButton_home_clicked"
QT_MOC_LITERAL(4, 50, 31), // "on_pushButton_entretien_clicked"
QT_MOC_LITERAL(5, 82, 29), // "on_pushButton_travail_clicked"
QT_MOC_LITERAL(6, 112, 28), // "on_pushButton_retour_clicked"
QT_MOC_LITERAL(7, 141, 30), // "on_pushButton_retour_2_clicked"
QT_MOC_LITERAL(8, 172, 29), // "on_pushButton_ajouter_clicked"
QT_MOC_LITERAL(9, 202, 25), // "on_pushButton_sup_clicked"
QT_MOC_LITERAL(10, 228, 30), // "on_pushButton_modifier_clicked"
QT_MOC_LITERAL(11, 259, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(12, 283, 4), // "arg1"
QT_MOC_LITERAL(13, 288, 27), // "on_pushButton_trier_clicked"
QT_MOC_LITERAL(14, 316, 31), // "on_pushButton_ajouter_t_clicked"
QT_MOC_LITERAL(15, 348, 32), // "on_pushButton_modifier_t_clicked"
QT_MOC_LITERAL(16, 381, 27), // "on_pushButton_sup_t_clicked"
QT_MOC_LITERAL(17, 409, 29), // "on_pushButton_trier_t_clicked"
QT_MOC_LITERAL(18, 439, 33) // "on_lineEdit_recherche_textCha..."

    },
    "Materiels\0HomeClicked\0\0"
    "on_pushButton_home_clicked\0"
    "on_pushButton_entretien_clicked\0"
    "on_pushButton_travail_clicked\0"
    "on_pushButton_retour_clicked\0"
    "on_pushButton_retour_2_clicked\0"
    "on_pushButton_ajouter_clicked\0"
    "on_pushButton_sup_clicked\0"
    "on_pushButton_modifier_clicked\0"
    "on_lineEdit_textChanged\0arg1\0"
    "on_pushButton_trier_clicked\0"
    "on_pushButton_ajouter_t_clicked\0"
    "on_pushButton_modifier_t_clicked\0"
    "on_pushButton_sup_t_clicked\0"
    "on_pushButton_trier_t_clicked\0"
    "on_lineEdit_recherche_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Materiels[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    0,   99,    2, 0x08 /* Private */,
       8,    0,  100,    2, 0x08 /* Private */,
       9,    0,  101,    2, 0x08 /* Private */,
      10,    0,  102,    2, 0x08 /* Private */,
      11,    1,  103,    2, 0x08 /* Private */,
      13,    0,  106,    2, 0x08 /* Private */,
      14,    0,  107,    2, 0x08 /* Private */,
      15,    0,  108,    2, 0x08 /* Private */,
      16,    0,  109,    2, 0x08 /* Private */,
      17,    0,  110,    2, 0x08 /* Private */,
      18,    1,  111,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void Materiels::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Materiels *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->HomeClicked(); break;
        case 1: _t->on_pushButton_home_clicked(); break;
        case 2: _t->on_pushButton_entretien_clicked(); break;
        case 3: _t->on_pushButton_travail_clicked(); break;
        case 4: _t->on_pushButton_retour_clicked(); break;
        case 5: _t->on_pushButton_retour_2_clicked(); break;
        case 6: _t->on_pushButton_ajouter_clicked(); break;
        case 7: _t->on_pushButton_sup_clicked(); break;
        case 8: _t->on_pushButton_modifier_clicked(); break;
        case 9: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_pushButton_trier_clicked(); break;
        case 11: _t->on_pushButton_ajouter_t_clicked(); break;
        case 12: _t->on_pushButton_modifier_t_clicked(); break;
        case 13: _t->on_pushButton_sup_t_clicked(); break;
        case 14: _t->on_pushButton_trier_t_clicked(); break;
        case 15: _t->on_lineEdit_recherche_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Materiels::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Materiels::HomeClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Materiels::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Materiels.data,
    qt_meta_data_Materiels,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Materiels::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Materiels::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Materiels.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Materiels::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void Materiels::HomeClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
