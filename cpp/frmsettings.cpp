#include "header/frmsettings.h"
#include "ui_frmsettings.h"

frmSettings::frmSettings(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::frmSettings)
{
    ui->setupUi(this);
}

frmSettings::~frmSettings()
{
    delete ui;
}
