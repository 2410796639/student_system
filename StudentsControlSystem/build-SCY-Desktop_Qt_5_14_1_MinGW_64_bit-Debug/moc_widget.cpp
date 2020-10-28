/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../bf/widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[22];
    char stringdata0[424];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 11), // "judge_pride"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 6), // "detail"
QT_MOC_LITERAL(4, 27, 16), // "judge_punishment"
QT_MOC_LITERAL(5, 44, 12), // "change_pride"
QT_MOC_LITERAL(6, 57, 5), // "count"
QT_MOC_LITERAL(7, 63, 17), // "change_punishment"
QT_MOC_LITERAL(8, 81, 37), // "on_student_information_manage..."
QT_MOC_LITERAL(9, 119, 37), // "on_subject_information_manage..."
QT_MOC_LITERAL(10, 157, 35), // "on_score_information_manage_c..."
QT_MOC_LITERAL(11, 193, 35), // "on_pride_information_manage_c..."
QT_MOC_LITERAL(12, 229, 17), // "on_back_1_clicked"
QT_MOC_LITERAL(13, 247, 27), // "on_basicinformation_clicked"
QT_MOC_LITERAL(14, 275, 25), // "on_subject_search_clicked"
QT_MOC_LITERAL(15, 301, 23), // "on_score_search_clicked"
QT_MOC_LITERAL(16, 325, 22), // "on_delete_page_clicked"
QT_MOC_LITERAL(17, 348, 23), // "on_pride_search_clicked"
QT_MOC_LITERAL(18, 372, 17), // "on_back_2_clicked"
QT_MOC_LITERAL(19, 390, 19), // "on_add_page_clicked"
QT_MOC_LITERAL(20, 410, 8), // "samename"
QT_MOC_LITERAL(21, 419, 4) // "Name"

    },
    "Widget\0judge_pride\0\0detail\0judge_punishment\0"
    "change_pride\0count\0change_punishment\0"
    "on_student_information_manage_clicked\0"
    "on_subject_information_manage_clicked\0"
    "on_score_information_manage_clicked\0"
    "on_pride_information_manage_clicked\0"
    "on_back_1_clicked\0on_basicinformation_clicked\0"
    "on_subject_search_clicked\0"
    "on_score_search_clicked\0on_delete_page_clicked\0"
    "on_pride_search_clicked\0on_back_2_clicked\0"
    "on_add_page_clicked\0samename\0Name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x08 /* Private */,
       4,    1,  102,    2, 0x08 /* Private */,
       5,    1,  105,    2, 0x08 /* Private */,
       7,    1,  108,    2, 0x08 /* Private */,
       8,    0,  111,    2, 0x08 /* Private */,
       9,    0,  112,    2, 0x08 /* Private */,
      10,    0,  113,    2, 0x08 /* Private */,
      11,    0,  114,    2, 0x08 /* Private */,
      12,    0,  115,    2, 0x08 /* Private */,
      13,    0,  116,    2, 0x08 /* Private */,
      14,    0,  117,    2, 0x08 /* Private */,
      15,    0,  118,    2, 0x08 /* Private */,
      16,    0,  119,    2, 0x08 /* Private */,
      17,    0,  120,    2, 0x08 /* Private */,
      18,    0,  121,    2, 0x08 /* Private */,
      19,    0,  122,    2, 0x08 /* Private */,
      20,    1,  123,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Int, QMetaType::QString,    3,
    QMetaType::Int, QMetaType::QString,    3,
    QMetaType::QString, QMetaType::Int,    6,
    QMetaType::QString, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   21,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->judge_pride((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: { int _r = _t->judge_punishment((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->change_pride((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->change_punishment((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->on_student_information_manage_clicked(); break;
        case 5: _t->on_subject_information_manage_clicked(); break;
        case 6: _t->on_score_information_manage_clicked(); break;
        case 7: _t->on_pride_information_manage_clicked(); break;
        case 8: _t->on_back_1_clicked(); break;
        case 9: _t->on_basicinformation_clicked(); break;
        case 10: _t->on_subject_search_clicked(); break;
        case 11: _t->on_score_search_clicked(); break;
        case 12: _t->on_delete_page_clicked(); break;
        case 13: _t->on_pride_search_clicked(); break;
        case 14: _t->on_back_2_clicked(); break;
        case 15: _t->on_add_page_clicked(); break;
        case 16: { bool _r = _t->samename((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Widget.data,
    qt_meta_data_Widget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
