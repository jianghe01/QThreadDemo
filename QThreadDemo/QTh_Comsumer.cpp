#include "QTh_Comsumer.h"

#include <iostream>

QTh_Consumer::QTh_Consumer(CTestThread *testTh)
{
	_testTh = testTh;
	_testTh->is_trans_between_cc = true;
}

QTh_Consumer::~QTh_Consumer()
{

}

void QTh_Consumer::run()
{
	while (_testTh->is_trans_between_cc) {
		std::cout << "consuming ...\n";
		sleep(3);
	}
	std::cout << "end consumer\n";
}
