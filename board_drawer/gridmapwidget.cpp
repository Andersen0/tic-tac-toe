#include "gridmapwidget.h"

GridMapWidget::GridMapWidget(QWidget* parent)
    : QWidget(parent) {
    QGridLayout* gridLayout = new QGridLayout(this);
    gridLayout->setSpacing(0);
    gridLayout->setContentsMargins(0, 0, 0, 0);

    // Initialize an 8x8 grid of PixelWidget
    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            PixelWidget* pixel = new PixelWidget(this);
            gridLayout->addWidget(pixel, row, col);

            connect(pixel, &PixelWidget::toggledStateChanged, this, []() {
            });
        }
    }
}
