#ifndef GRIDMAPWIDGET_H
#define GRIDMAPWIDGET_H

#include <QWidget>
#include <QGridLayout>
#include "pixelwidget.h"

class GridMapWidget : public QWidget {
    Q_OBJECT

public:
    GridMapWidget(QWidget* parent = nullptr);
};

#endif // GRIDMAPWIDGET_H
