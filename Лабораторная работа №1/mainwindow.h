#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QLabel>
#include <QGridLayout>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_clear_clicked();

    void on_btn_ce_clicked();

    void on_btn_backspace_clicked();

    void on_btn_point_clicked();

    void on_btn_1_clicked();

    void on_btn_0_clicked();

    void on_btn_2_clicked();

    void on_btn_3_clicked();

    void on_btn_4_clicked();

    void on_btn_5_clicked();

    void on_btn_6_clicked();

    void on_btn_7_clicked();

    void on_btn_8_clicked();

    void on_btn_9_clicked();

    void on_btn_sub_clicked();

    void on_btn_div_clicked();

    void on_btn_mul_clicked();

    void on_btn_neg_clicked();

    void on_btn_add_clicked();

    void on_btn_calc_clicked();

private:
    Ui::MainWindow *ui;
    QWidget *centralWidget;
    QVBoxLayout *layout;
    QLineEdit *le_entry;
    QLabel *lbl_temp;
    QGridLayout *gridLayout_buttons;
    QPushButton *btn_0;
    QPushButton *btn_1;
    QPushButton *btn_2;
    QPushButton *btn_3;
    QPushButton *btn_4;
    QPushButton *btn_5;
    QPushButton *btn_6;
    QPushButton *btn_7;
    QPushButton *btn_8;
    QPushButton *btn_9;
    QPushButton *btn_div;
    QPushButton *btn_mul;
    QPushButton *btn_neg;
    QPushButton *btn_add;
    QPushButton *btn_calc;
    QString calculateExpression(const QString &expression);

};
#endif // MAINWINDOW_H
