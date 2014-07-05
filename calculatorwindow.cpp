#include "calculatorwindow.h"
#include "ui_calculatorwindow.h"
#include <QtCore/qmath.h>

CalculatorWindow::CalculatorWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CalculatorWindow)
{
    ui->setupUi(this);
}

CalculatorWindow::~CalculatorWindow()
{
    delete ui;
}

void CalculatorWindow::on_ac_clicked()
{
    ui->output->setText("0");
    ui->output2->setText("0");
    ui->sign->setText(NULL);
}

void CalculatorWindow::on_plus_clicked()
{
    if(ui->output2->displayText() == "0"){
        ui->sign->setText("+");
        ui->output2->setText(ui->output->displayText());
        ui->output->setText("0");
    }else{
        double y = ui->output2->displayText().toDouble();
        double x = ui->output->displayText().toDouble();
        ui->sign->setText("+");
        ui->output2->setText(QString::number(x+y));
        ui->output->setText("0");
    }
}

void CalculatorWindow::on_nine_clicked()
{
    QString a = ui->output->displayText();
    if(a != "0")
        ui->output->setText(a + "9");
    else ui->output->setText("9");
}

void CalculatorWindow::on_eight_clicked()
{
    QString a = ui->output->displayText();
    if(a != "0")
        ui->output->setText(a + "8");
    else ui->output->setText("8");
}

void CalculatorWindow::on_seven_clicked()
{
    QString a = ui->output->displayText();
    if(a != "0")
        ui->output->setText(a + "7");
    else ui->output->setText("7");
}

void CalculatorWindow::on_six_clicked()
{
    QString a = ui->output->displayText();
    if(a != "0")
        ui->output->setText(a + "6");
    else ui->output->setText("6");
}

void CalculatorWindow::on_five_clicked()
{
    QString a = ui->output->displayText();
    if(a != "0")
        ui->output->setText(a + "5");
    else ui->output->setText("5");
}

void CalculatorWindow::on_four_clicked()
{
    QString a = ui->output->displayText();
    if(a != "0")
        ui->output->setText(a + "4");
    else ui->output->setText("4");
}

void CalculatorWindow::on_three_clicked()
{
    QString a = ui->output->displayText();
    if(a != "0")
        ui->output->setText(a + "3");
    else ui->output->setText("3");
}

void CalculatorWindow::on_two_clicked()
{
    QString a = ui->output->displayText();
    if(a != "0")
        ui->output->setText(a + "2");
    else ui->output->setText("2");
}

void CalculatorWindow::on_one_clicked()
{
    QString a = ui->output->displayText();
    if(a != "0")
        ui->output->setText(a + "1");
    else ui->output->setText("1");
}

void CalculatorWindow::on_zero_clicked()
{
    QString a = ui->output->displayText();
    if(a != "0")
        ui->output->setText(a + "0");
    else ui->output->setText("0");
}

void CalculatorWindow::on_minus_clicked()
{
    if(ui->output2->displayText() == "0"){
        ui->sign->setText("-");
        ui->output2->setText(ui->output->displayText());
        ui->output->setText("0");
    }else{
        double y = ui->output2->displayText().toDouble();
        double x = ui->output->displayText().toDouble();
        ui->output2->setText(QString::number(x+y));
        ui->output->setText("0");
        ui->sign->setText("-");
    }
}

void CalculatorWindow::on_multiply_clicked()
{
    if(ui->output2->displayText() == "0"){
        ui->sign->setText("*");
        ui->output2->setText(ui->output->displayText());
        ui->output->setText("0");
    }else{
        double y = ui->output2->displayText().toDouble();
        double x = ui->output->displayText().toDouble();
        ui->output2->setText(QString::number(x+y));
        ui->output->setText("0");
        ui->sign->setText("*");
    }
}

void CalculatorWindow::on_divide_clicked()
{
    if(ui->output2->displayText() == "0"){
        ui->sign->setText("/");
        ui->output2->setText(ui->output->displayText());
        ui->output->setText("0");
    }else{
        double y = ui->output2->displayText().toDouble();
        double x = ui->output->displayText().toDouble();
        ui->output2->setText(QString::number(x+y));
        ui->output->setText("0");
        ui->sign->setText("/");
    }
}

void CalculatorWindow::on_parcent_clicked()
{
    if(ui->output2->displayText() == "0"){
        ui->sign->setText("%");
        ui->output2->setText(ui->output->displayText());
        ui->output->setText("0");
    }else{
        double y = ui->output2->displayText().toDouble();
        double x = ui->output->displayText().toDouble();
        ui->output2->setText(QString::number((x/y)*100));
        ui->output->setText("0");
        ui->sign->setText("%");
    }
}

void CalculatorWindow::on_equal_clicked()
{
    QString a = ui->output->displayText();
    QString b = ui->output2->displayText();

    double y = a.toDouble();
    double x = b.toDouble();
    QString c = ui->sign->text();
    if(c == "+"){
        ui->output2->setText(QString::number(x+y));
        ui->output->setText("0");
    }else if(c == "-"){
        ui->output2->setText(QString::number(x-y));
        ui->output->setText("0");
    }else if(c == "*"){
        ui->output2->setText(QString::number(x*y));
        ui->output->setText("0");
    }else if(c == "/"){
        ui->output2->setText(QString::number(x/y));
        ui->output->setText("0");
    }else if(c == "%"){
        ui->output2->setText(QString::number((x*100)/y));
        ui->output->setText("0");
    }else if(c == "POW"){
        double x = ui->output2->displayText().toDouble();
        double y = ui->output->displayText().toDouble();
        ui->output2->setText(QString::number(qPow(x,y)));
        ui->output->setText("0");
        ui->sign->setText("=");
    }else{
        ui->output2->setText("MAL FORMED.PRESS AC");
        ui->output->setText("0");
    }
}

void CalculatorWindow::on_dot_clicked()
{

}

void CalculatorWindow::on_sqrt_clicked()
{
    double x = ui->output->displayText().toDouble();
    ui->output2->setText(QString::number(qSqrt(x)));
    ui->output->setText("0");
    ui->sign->setText("SQRT");
}

void CalculatorWindow::on_pow_clicked()
{
    if(ui->output2->displayText() == "0"){
        ui->output2->setText(ui->output->displayText());
        ui->output->setText("0");
        ui->sign->setText("POW");
    }else{
        ui->sign->setText("POW");
    }
}

void CalculatorWindow::on_bin_clicked()
{
    int n = ui->output->displayText().toInt();
    ui->output2->setText(QString::number(n,2));
    ui->output->setText("0");
    ui->sign->setText("BIN");
}

void CalculatorWindow::on_hex_clicked()
{
    int n = ui->output->displayText().toInt();
    ui->output2->setText(QString::number(n,16).toUpper());
    ui->output->setText("0");
    ui->sign->setText("HEX");
}

void CalculatorWindow::on_oct_clicked()
{
    int n = ui->output->displayText().toInt();
    ui->output2->setText(QString::number(n,8));
    ui->output->setText("0");
    ui->sign->setText("OCT");
}
