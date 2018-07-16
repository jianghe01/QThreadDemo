#ifndef QTHREADDEMO_H
#define QTHREADDEMO_H

#include <QtWidgets/QMainWindow>
#include "ui_qthreaddemo.h"

#include "QTh_Producer.h"
#include "QTh_Comsumer.h"
#include "TestThread.h"

class QThreadDemo : public QMainWindow
{
	Q_OBJECT

public:
	QThreadDemo(QWidget *parent = 0);
	~QThreadDemo();

private:
	Ui::QThreadDemoClass ui;

	QTh_Producer *_pdcr;
	QTh_Consumer *_csmr;
	CTestThread *testTh;

	protected slots:
	void stop();
};

#endif // QTHREADDEMO_H
