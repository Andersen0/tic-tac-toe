#include "PixelWidget.h"
#include <QMouseEvent>
#include <QApplication>

// Constructor initializes the pixel state and appearance
PixelWidget::PixelWidget(QWidget* parent)
    : QPushButton(parent), toggled(false), isHovered(false) {
    setFixedSize(40, 40);  // Set a fixed size for each cell
    setStyleSheet("background-color: gray; border: 1px solid black;");
    setFocusPolicy(Qt::NoFocus);  // Ensure the button doesn't steal focus
}

void PixelWidget::setToggled(bool state) {
    toggled = state;
    updateStyle();
}

void PixelWidget::toggle() {
    setToggled(!toggled);
}

// Handle mouse press events
void PixelWidget::mousePressEvent(QMouseEvent* event) {
    if (event->button() == Qt::LeftButton) {
            setToggled(true);
            emit toggledStateChanged();
        } else if (event->button() == Qt::RightButton) {
            // If right button pressed, toggle to off
            setToggled(false);
            emit toggledStateChanged();
        }
}

// Update the visual style of the pixel based on its state
void PixelWidget::updateStyle() {
    if (toggled) {
        setStyleSheet("background-color: white; border: 1px solid black;"); // On state
    } else {
        setStyleSheet("background-color: gray; border: 1px solid black;"); // Off state
    }
}
