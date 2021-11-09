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

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
