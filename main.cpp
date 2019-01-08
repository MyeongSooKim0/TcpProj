#include <QApplication>

#include "mainwindow.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QApplication::setApplicationDisplayName(MainWindow::tr("Fortune Server"));
	MainWindow server;
	server.show();
	return app.exec();
}
