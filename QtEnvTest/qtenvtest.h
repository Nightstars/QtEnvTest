#pragma once

#include <QtWidgets/QWidget>
#include "ui_qtenvtest.h"

class QtEnvTest : public QWidget
{
	Q_OBJECT

public:
	QtEnvTest(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtEnvTestClass ui;
};
