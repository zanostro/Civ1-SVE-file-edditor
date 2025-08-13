#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QApplication::setApplicationName("CIV1 save edditor");
    QApplication::setOrganizationName("CIV1");
    QApplication::setApplicationVersion("0.1.0");

    MainWindow w;
    w.show();
    return app.exec();
}
