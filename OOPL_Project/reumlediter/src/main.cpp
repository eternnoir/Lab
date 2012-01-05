#include <QtGui/QApplication>
#include "qmlapplicationviewer.h"
#include "diagramwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    //QmlApplicationViewer viewer;
    diagramwindow diagramwindow;
    diagramwindow.show();

    return app.exec();
}
