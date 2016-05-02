#include "byte_converter.h"
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QIntValidator>

byte_converter::byte_converter(){

	// Generate labels
	QLabel* decimal_label = new QLabel(tr("Decimal"), this);
	QLabel* heximal_label = new QLabel(tr("Hexa-decimal"), this);
	QLabel* binary_label = new QLabel(tr("Binary"), this);

	// Generate LineEdits 
	decimal_line =  new QLineEdit(this);
	hexadecimal_line = new QLineEdit(this);
	binary_line = new QLineEdit(this);

	// generating necessary layouts
	QVBoxLayout* vbox = new QVBoxLayout(this);
	QGridLayout* grid = new QGridLayout();
	QHBoxLayout* hbox = new QHBoxLayout();

	vbox->addLayout(grid);
	vbox->addStretch();
	vbox->addLayout(hbox);

	grid->addWidget(decimal_label, 0, 0);
	grid->addWidget(decimal_line, 0, 1);
	grid->addWidget(heximal_label, 1, 0);
	grid->addWidget(hexadecimal_line, 1, 1);
	grid->addWidget(binary_label, 2, 0);
	grid->addWidget(binary_line, 2, 1);

	// Create quit button

	QPushButton* quit_btn = new QPushButton(tr("Quit"), this);
	hbox->addWidget(quit_btn);

	quit_btn->setDefault(true);


	// Limiting input to valid values

	QIntValidator* decimal_validator = new QIntValidator(0, 255, decimal_line);
	decimal_line->setValidator(decimal_validator);

	QRegExpValidator* heximal_validator = new QRegExpValidator(QRegExp("[0-9A-Fa-f]{1,2}"), hexadecimal_line);
	hexadecimal_line->setValidator(heximal_validator);

	QRegExpValidator* binary_validator = new QRegExpValidator(QRegExp("[01]{1,8}"), binary_line);
	binary_line->setValidator(binary_validator);

	setWindowTitle(tr("Byte Converter"));

	connect(decimal_line, SIGNAL(textChanged(const QString&)), this, SLOT(decimal_changed(const QString&)));
	connect(quit_btn, SIGNAL(clicked()), this, SLOT(accept()));

}

void byte_converter::decimal_changed(const QString& newVal) {
	bool okay;
	int num = newVal.toInt(&okay);
	if (okay) {
		hexadecimal_line->setText(QString::number(num, 16));
		binary_line->setText(QString::number(num, 2));
	}else {
		hexadecimal_line->setText("");
		binary_line->setText("");
	}
}