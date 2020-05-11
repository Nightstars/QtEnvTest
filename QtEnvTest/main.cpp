#include "qtenvtest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtEnvTest w;
	w.show();
	return a.exec();
}
