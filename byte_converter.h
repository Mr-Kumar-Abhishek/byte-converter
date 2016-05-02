#ifndef BYTE_CONVERTER_H
#define BYTE_CONVERTER_H

#include <QDialog>

class QLineEdit;

class byte_converter : public QDialog {

	Q_OBJECT;

	public:

		byte_converter();

	private:
		QLineEdit* decimal_line;
		QLineEdit* hexadecimal_line;
		QLineEdit* binary_line;
};

#endif