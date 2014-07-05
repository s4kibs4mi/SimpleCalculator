#ifndef CalculatorWindow_H
#define CalculatorWindow_H

#include <QMainWindow>

namespace Ui {
class CalculatorWindow;
}

class CalculatorWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CalculatorWindow(QWidget *parent = 0);
    ~CalculatorWindow();

private slots:
    void on_ac_clicked();

    void on_plus_clicked();

    void on_nine_clicked();

    void on_eight_clicked();

    void on_seven_clicked();

    void on_six_clicked();

    void on_five_clicked();

    void on_four_clicked();

    void on_three_clicked();

    void on_two_clicked();

    void on_one_clicked();

    void on_zero_clicked();

    void on_minus_clicked();

    void on_multiply_clicked();

    void on_divide_clicked();

    void on_parcent_clicked();

    void on_equal_clicked();

    void on_dot_clicked();

    void on_sqrt_clicked();

    void on_pow_clicked();

    void on_bin_clicked();

    void on_hex_clicked();

    void on_oct_clicked();

private:
    Ui::CalculatorWindow *ui;
};

#endif // CalculatorWindow_H
