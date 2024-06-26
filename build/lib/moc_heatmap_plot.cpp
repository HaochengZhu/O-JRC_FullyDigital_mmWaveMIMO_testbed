/****************************************************************************
** Meta object code from reading C++ file 'heatmap_plot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../lib/heatmap_plot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'heatmap_plot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gr__mimo_ofdm_jrc__heatmap_plot_t {
    QByteArrayData data[8];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gr__mimo_ofdm_jrc__heatmap_plot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gr__mimo_ofdm_jrc__heatmap_plot_t qt_meta_stringdata_gr__mimo_ofdm_jrc__heatmap_plot = {
    {
QT_MOC_LITERAL(0, 0, 31), // "gr::mimo_ofdm_jrc::heatmap_plot"
QT_MOC_LITERAL(1, 32, 7), // "refresh"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 16), // "findClosestIndex"
QT_MOC_LITERAL(4, 58, 15), // "QVector<double>"
QT_MOC_LITERAL(5, 74, 4), // "axis"
QT_MOC_LITERAL(6, 79, 5), // "value"
QT_MOC_LITERAL(7, 85, 22) // "loadSiversAngleFromCSV"

    },
    "gr::mimo_ofdm_jrc::heatmap_plot\0refresh\0"
    "\0findClosestIndex\0QVector<double>\0"
    "axis\0value\0loadSiversAngleFromCSV"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gr__mimo_ofdm_jrc__heatmap_plot[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    2,   30,    2, 0x0a /* Public */,
       7,    0,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Int, 0x80000000 | 4, QMetaType::Double,    5,    6,
    QMetaType::Double,

       0        // eod
};

void gr::mimo_ofdm_jrc::heatmap_plot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<heatmap_plot *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refresh(); break;
        case 1: { int _r = _t->findClosestIndex((*reinterpret_cast< const QVector<double>(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: { double _r = _t->loadSiversAngleFromCSV();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gr::mimo_ofdm_jrc::heatmap_plot::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_gr__mimo_ofdm_jrc__heatmap_plot.data,
    qt_meta_data_gr__mimo_ofdm_jrc__heatmap_plot,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gr::mimo_ofdm_jrc::heatmap_plot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gr::mimo_ofdm_jrc::heatmap_plot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gr__mimo_ofdm_jrc__heatmap_plot.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int gr::mimo_ofdm_jrc::heatmap_plot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
