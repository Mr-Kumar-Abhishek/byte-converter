#include <QApplication>
#include "byte_converter.h"

int main (int argc, char* argv[]) {
	

	QApplication app(argc, argv);

	byte_converter* b_con = new byte_converter();
	b_con->setAttribute(Qt::WA_QuitOnClose);
	b_con->show();

	return app.exec();
}