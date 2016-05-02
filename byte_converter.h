#ifndef BYTE_CONVERTER_H
#define BYTE_CONVERTER_H

#include <QDialog>

class QLineEdit;
class QString;

class byte_converter : public QDialog {

	Q_OBJECT;

	public:

		byte_converter();

	private slots:

		void decimal_changed(const QString&);
		void heximal_changed(const QString&);
		void binary_changed(const QString&);

	private:
		QLineEdit* decimal_line;
		QLineEdit* hexadecimal_line;
		QLineEdit* binary_line;
};

#endif