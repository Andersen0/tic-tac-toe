#ifndef SLIDERWIDGET_H
#define SLIDERWIDGET_H

#include <QSlider>

class SliderWidget : public QSlider
{
    Q_OBJECT
public:
    explicit SliderWidget(QSlider *parent = nullptr);

signals:
};

#endif // SLIDERWIDGET_H
