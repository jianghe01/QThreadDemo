#include "qthreaddemo.h"

#include <iostream>

QThreadDemo::QThreadDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.Btn_stop, SIGNAL(clicked()), this, SLOT(stop()));

	testTh = new CTestThread();
	_pdcr = new QTh_Producer(testTh);
	_csmr = new QTh_Consumer(testTh);

	std::cout << testTh->is_trans_between_pc << ": pc\n";
	std::cout << testTh->is_trans_between_cc << ": cc\n";

	_pdcr->start();
	_csmr->start();
}

QThreadDemo::~QThreadDemo()
{
}

void QThreadDemo::stop()
{
	//testTh->is_trans_between_pc = false;
	_pdcr->is_trans_between_pc = true;
	_pdcr->stop();
}