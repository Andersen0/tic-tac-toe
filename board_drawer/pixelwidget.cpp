#include "PixelWidget.h"
#include <QMouseEvent>
#include <QApplication>

// Constructor initializes the pixel state and appearance
PixelWidget::PixelWidget(QWidget* parent)
    : QPushButton(parent), toggled(false), isHovered(false), isMousePressed(false) {
    setFixedSize(40, 40); // Dynamic pixel sizes
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

void PixelWidget::mousePressEvent(QMouseEvent* event) {
    if (event->button() == Qt::LeftButton) {
        isMousePressed = true;
        setToggled(true);  // Turn on when clicking
    }
}

void PixelWidget::mouseMoveEvent(QMouseEvent* event) {
    if (isMousePressed && (event->buttons() & Qt::LeftButton)) {
        setToggled(true);  // Turn on while dragging
    }
}

void PixelWidget::updateStyle() {
    if (toggled) {
        setStyleSheet("background-color: white; border: 1px solid black;"); // On state
    } else {
        setStyleSheet("background-color: gray; border: 1px solid black;"); // Off state
    }
}

void PixelWidget::mouseReleaseEvent(QMouseEvent* event) {
    if (event->button() == Qt::LeftButton) {
        isMousePressed = false;
    }
}
