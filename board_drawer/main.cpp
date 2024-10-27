#include <QApplication>
#include "gridmapwidget.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    GridMapWidget window;
    window.setWindowTitle("8x8 Grid Map");
    window.show();

    return app.exec();
}
