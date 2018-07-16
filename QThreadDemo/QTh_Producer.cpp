#include "QTh_Producer.h"

#include <iostream>

QTh_Producer::QTh_Producer(CTestThread *testTh)
{
	is_trans_between_pc = false;
	_testTh = testTh;
	_testTh->is_trans_between_pc = true;
}

QTh_Producer::~QTh_Producer()
{

}

void QTh_Producer::stop()
{
	_testTh->is_trans_between_pc = false;
	is_trans_between_pc = true;
}

void QTh_Producer::run()
{
	while (_testTh->is_trans_between_pc) {
		std::cout << is_trans_between_pc << "producing ...\n";
		sleep(3);
	}
	_testTh->is_trans_between_cc = false;
	std::cout << is_trans_between_pc << "end producer\n";
}
