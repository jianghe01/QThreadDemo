#ifndef QTH_PRODUCER_H
#define QTH_PRODUCER_H

#include <QThread>
#include "TestThread.h"

class QTh_Producer : public QThread
{
	Q_OBJECT

public:
	QTh_Producer(CTestThread *testTh);
	~QTh_Producer();

	void stop();
	bool is_trans_between_pc;
private:
	void run();
	CTestThread *_testTh;
};

#endif // QTH_PRODUCER_H
