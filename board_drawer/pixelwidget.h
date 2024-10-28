#ifndef PIXELWIDGET_H
#define PIXELWIDGET_H

#include <QPushButton>
#include <QMouseEvent>

class PixelWidget : public QPushButton {
    Q_OBJECT

public:
    PixelWidget(QWidget* parent = nullptr);  // Constructor

    bool isToggled() const;  // Check if the pixel is toggled (on)
    void setToggled(bool state); // Set the pixel state
    void toggle(); // Toggle the pixel state

protected:
    void mousePressEvent(QMouseEvent* event) override; // Handle mouse press events

private:
    bool toggled; // State of the pixel (on or off)
    bool isHovered; // Track if this pixel is currently hovered
    void updateStyle(); // Update the visual style based on the state

signals:
    void toggledStateChanged(); // Signal emitted when the toggled state changes
};

#endif // PIXELWIDGET_H
