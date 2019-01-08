
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>
#include <QString>
#include <QVector>

QT_BEGIN_NAMESPACE
class QLabel;
class QTcpServer;
class QNetworkSession;
QT_END_NAMESPACE

//! [0]
class MainWindow : public QDialog
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = nullptr);

	private slots:
	void sessionOpened();
	void sendFortune();

private:
	QLabel *statusLabel = nullptr;
	QTcpServer *tcpServer = nullptr;
	QVector<QString> fortunes;
	QNetworkSession *networkSession = nullptr;
};
//! [0]

#endif
