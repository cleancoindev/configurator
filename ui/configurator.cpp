#include "configurator.hpp"
#include "ui_configurator.h"

#include <core/common.hpp>

cs::Configurator::Configurator(QWidget *parent):
    QWidget(parent),
    ui(new Ui::Configurator())
{
    ui->setupUi(this);
    ui->listBox->setVisible(false);
    ui->boostrapTypeBox->addItems(cs::Literals::boostrapTypes);
    ui->mainLayout->addStretch(1);

    setWindowTitle(cs::Literals::configuratorTitle);
    setWindowIcon(QIcon(":/resources/cs.ico"));

    setStyleSheet(":/resources/style.css");
}

cs::Configurator::~Configurator()
{
    delete ui;
}