#include "qthreaddemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QThreadDemo w;
	w.show();
	return a.exec();
}
