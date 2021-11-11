#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_easy_clicked();

    void on_pushButton_medium_clicked();

    void on_pushButton_hard_clicked();

    void on_pushButton_clicked();

    void on_pushButton_mediplaying_clicked();

    void on_pushButton_medi_die_clicked();

    void on_pushButton_medi_die_2_clicked();

    void on_pushButton_108_clicked();

    void on_m_button_D_clicked();

    void on_pushButton_86_clicked();

    void on_pushButton_88_clicked();

    void on_pushButton_90_clicked();

    void on_m_button_C_clicked();

    void on_pushButton_87_clicked();

    void on_pushButton_89_clicked();

    void on_pushButton_105_clicked();

    void on_pushButton_114_clicked();

    void on_m_button_C_3_clicked();

    void on_m_button_D_3_clicked();

    void on_pushButton_148_clicked();

    void on_pushButton_154_clicked();

    void on_pushButton_149_clicked();

    void on_pushButton_147_clicked();

    void on_pushButton_153_clicked();

    void on_pushButton_104_clicked();

    void on_pushButton_185_clicked();

    void on_pushButton_146_clicked();

    void on_pushButton_143_clicked();

    void on_m_button_D_5_clicked();

    void on_pushButton_157_clicked();

    void on_pushButton_156_clicked();

    void on_pushButton_155_clicked();

    void on_pushButton_159_clicked();

    void on_pushButton_160_clicked();

    void on_pushButton_161_clicked();

    void on_m_button_D_6_clicked();

    void on_pushButton_180_clicked();

    void on_pushButton_181_clicked();

    void on_pushButton_184_clicked();

    void on_pushButton_186_clicked();

    void on_pushButton_333_clicked();

    void on_m_button_B7_clicked();

    void on_m_button_C_7_clicked();

    void on_pushButton_341_clicked();

    void on_pushButton_343_clicked();

    void on_pushButton_348_clicked();

    void on_pushButton_345_clicked();

    void on_pushButton_346_clicked();

    void on_m_button_A8_clicked();

    void on_m_button_D_8_clicked();

    void on_pushButton_118_clicked();

    void on_pushButton_116_clicked();

    void on_pushButton_122_clicked();

    void on_m_button_A9_clicked();

    void on_pushButton_355_clicked();

    void on_pushButton_354_clicked();

    void on_pushButton_441_clicked();

    void on_pushButton_126_clicked();

    void on_pushButton_124_clicked();

    void on_m_button_A10_clicked();

    void on_m_button_B10_clicked();

    void on_m_button_C_10_clicked();

    void on_pushButton_448_clicked();

    void on_m_button_D_11_clicked();

    void on_pushButton_357_clicked();

    void on_pushButton_137_clicked();

    void on_pushButton_604_clicked();

    void on_pushButton_444_clicked();

    void on_pushButton_468_clicked();

    void on_pushButton_mainpage_easy_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
