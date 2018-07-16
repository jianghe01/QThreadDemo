#ifndef QTH_COMSUMER_H
#define QTH_COMSUMER_H

#include <QThread>
#include "TestThread.h"

class QTh_Consumer : public QThread
{
	Q_OBJECT

public:
	QTh_Consumer(CTestThread *testTh);
	~QTh_Consumer();

private:
	void run();
	CTestThread *_testTh;
};

#endif // QTH_COMSUMER_H
