#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPushButton>
#include <iostream>
#include <QMessageBox>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_easy_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_medium_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButton_hard_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_pushButton_1_clicked()
{
    ui->pushButton_1 ->setHidden(true);
}


void MainWindow::on_pushButton_mediplaying_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_medi_die_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_medi_die_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_108_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_m_button_D_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_86_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_88_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_90_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_m_button_C_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_87_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_89_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_105_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_114_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_m_button_C_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_m_button_D_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_148_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_154_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_149_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_147_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_153_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_104_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_185_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_146_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_143_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_m_button_D_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_157_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_156_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_155_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_159_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_160_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_161_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_m_button_D_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_180_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_181_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_184_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_186_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_333_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_m_button_B7_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_m_button_C_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_341_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_343_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_348_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_345_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_346_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_m_button_A8_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_m_button_D_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_118_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_116_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_122_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_m_button_A9_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_355_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_354_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_441_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_126_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_124_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_m_button_A10_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_m_button_B10_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_m_button_C_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_448_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_m_button_D_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_357_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_137_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_604_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_444_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_468_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_mainpage_easy_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_mainpage_medium2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_mainpage_medium2_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_mainpage_medium2_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_mainpage_medium2_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_56_clicked()
{
    ui -> pushButton_56 -> setHidden(true);
}


void MainWindow::on_pushButton_10_clicked()
{
    ui -> pushButton_10 -> setHidden(true);
}


void MainWindow::on_pushButton_11_clicked()
{
    ui -> pushButton_11 -> setHidden(true);
}


void MainWindow::on_DIE1_clicked()
{
    ui -> DIE1 -> setHidden(true);
    ui -> slime -> setHidden(true);
    auto answer = QMessageBox::question(this, tr("Pause Game"),tr("Are you sure to quit and go back to main page?"));
    if(answer == QMessageBox::Yes){
        ui->stackedWidget->setCurrentIndex(0);
    }
    on_yes_button_clicked();
}


void MainWindow::on_DIE2_clicked()
{
    ui -> DIE2 -> setHidden(true);
    ui -> slime -> setHidden(true);
    auto answer = QMessageBox::question(this, tr("Pause Game"),tr("Are you sure to quit and go back to main page?"));
    if(answer == QMessageBox::Yes){
        ui->stackedWidget->setCurrentIndex(0);
    }
    on_yes_button_clicked();
}


void MainWindow::on_DIE3_clicked()
{
    ui -> DIE3 -> setHidden(true);
    ui -> slime -> setHidden(true);
    auto answer = QMessageBox::question(this, tr("Pause Game"),tr("Are you sure to quit and go back to main page?"));
    if(answer == QMessageBox::Yes){
        ui->stackedWidget->setCurrentIndex(0);
    }
    on_yes_button_clicked();
}


void MainWindow::on_DIE4_clicked()
{
    ui -> DIE4 -> setHidden(true);
    ui -> slime -> setHidden(true);
    auto answer = QMessageBox::question(this, tr("Pause Game"),tr("Are you sure to quit and go back to main page?"));
    if(answer == QMessageBox::Yes){
        ui->stackedWidget->setCurrentIndex(0);
    }
    on_yes_button_clicked();
}


void MainWindow::on_DIE5_clicked()
{
    ui -> DIE5 -> setHidden(true);
    ui -> slime -> setHidden(true);
    auto answer = QMessageBox::question(this, tr("Pause Game"),tr("Are you sure to quit and go back to main page?"));
    if(answer == QMessageBox::Yes){
        ui->stackedWidget->setCurrentIndex(0);
    }
    on_yes_button_clicked();
}


void MainWindow::on_DIE6_clicked()
{
    ui -> DIE6 -> setHidden(true);
    ui -> slime -> setHidden(true);
    auto answer = QMessageBox::question(this, tr("Pause Game"),tr("Are you sure to quit and go back to main page?"));
    if(answer == QMessageBox::Yes){
        ui->stackedWidget->setCurrentIndex(0);
    }
    on_yes_button_clicked();
}


void MainWindow::on_DIE7_clicked()
{
    ui -> DIE7 -> setHidden(true);
    ui -> slime -> setHidden(true);
    auto answer = QMessageBox::question(this, tr("Pause Game"),tr("Are you sure to quit and go back to main page?"));
    if(answer == QMessageBox::Yes){
        ui->stackedWidget->setCurrentIndex(0);
    }
    on_yes_button_clicked();
}


void MainWindow::on_DIE8_clicked()
{
    ui -> DIE8 -> setHidden(true);
    ui -> slime -> setHidden(true);
    auto answer = QMessageBox::question(this, tr("Pause Game"),tr("Are you sure to quit and go back to main page?"));
    if(answer == QMessageBox::Yes){
        ui->stackedWidget->setCurrentIndex(0);
    }
    on_yes_button_clicked();
}


void MainWindow::on_DIE9_clicked()
{
    ui -> DIE9 -> setHidden(true);
    ui -> slime -> setHidden(true);
    auto answer = QMessageBox::question(this, tr("Pause Game"),tr("Are you sure to quit and go back to main page?"));
    if(answer == QMessageBox::Yes){
        ui->stackedWidget->setCurrentIndex(0);
    }
    on_yes_button_clicked();
}


void MainWindow::on_DIE10_clicked()
{
    ui -> DIE10 -> setVisible(false);
    ui -> slime -> setHidden(true);
    auto answer = QMessageBox::question(this, tr("Pause Game"),tr("Are you sure to quit and go back to main page?"));
    if(answer == QMessageBox::Yes){
        ui->stackedWidget->setCurrentIndex(0);
    }
    on_yes_button_clicked();
}


void MainWindow::on_pushButton_12_clicked()
{
    ui -> pushButton_12 -> setHidden(true);
}


void MainWindow::on_pushButton_13_clicked()
{
    ui -> pushButton_13 -> setHidden(true);
}


void MainWindow::on_pushButton_16_clicked()
{
    ui -> pushButton_16 -> setHidden(true);
}


void MainWindow::on_pushButton_17_clicked()
{
     ui -> pushButton_17 -> setHidden(true);
}


void MainWindow::on_pushButton_18_clicked()
{
     ui -> pushButton_18 -> setHidden(true);
}


void MainWindow::on_pushButton_19_clicked()
{
     ui -> pushButton_19 -> setHidden(true);
}


void MainWindow::on_pushButton_2_clicked()
{
     ui -> pushButton_2 -> setHidden(true);
}


void MainWindow::on_pushButton_20_clicked()
{
     ui -> pushButton_20 -> setHidden(true);
}


void MainWindow::on_pushButton_21_clicked()
{
     ui -> pushButton_21 -> setHidden(true);
}


void MainWindow::on_pushButton_22_clicked()
{
     ui -> pushButton_22 -> setHidden(true);
}


void MainWindow::on_pushButton_23_clicked()
{
     ui -> pushButton_23 -> setHidden(true);
}


void MainWindow::on_pushButton_24_clicked()
{
     ui -> pushButton_24 -> setHidden(true);
}


void MainWindow::on_pushButton_25_clicked()
{
     ui -> pushButton_25 -> setHidden(true);
}


void MainWindow::on_pushButton_26_clicked()
{
     ui -> pushButton_26 -> setHidden(true);
}


void MainWindow::on_pushButton_27_clicked()
{
     ui -> pushButton_27 -> setHidden(true);
}


void MainWindow::on_pushButton_28_clicked()
{
     ui -> pushButton_28 -> setHidden(true);
}


void MainWindow::on_pushButton_29_clicked()
{
     ui -> pushButton_29 -> setHidden(true);
}


void MainWindow::on_pushButton_3_clicked()
{
     ui -> pushButton_3 -> setHidden(true);
}


void MainWindow::on_pushButton_30_clicked()
{
     ui -> pushButton_30 -> setHidden(true);
}


void MainWindow::on_pushButton_31_clicked()
{
     ui -> pushButton_31 -> setHidden(true);
}


void MainWindow::on_pushButton_33_clicked()
{
     ui -> pushButton_33 -> setHidden(true);
}


void MainWindow::on_pushButton_34_clicked()
{
     ui -> pushButton_34 -> setHidden(true);
}


void MainWindow::on_pushButton_35_clicked()
{
     ui -> pushButton_35 -> setHidden(true);
}


void MainWindow::on_pushButton_36_clicked()
{
     ui -> pushButton_36 -> setHidden(true);
}


void MainWindow::on_pushButton_37_clicked()
{
     ui -> pushButton_37 -> setHidden(true);
}


void MainWindow::on_pushButton_38_clicked()
{
     ui -> pushButton_38 -> setHidden(true);
}


void MainWindow::on_pushButton_39_clicked()
{
     ui -> pushButton_39 -> setHidden(true);
}


void MainWindow::on_pushButton_41_clicked()
{
     ui -> pushButton_41 -> setHidden(true);
}


void MainWindow::on_pushButton_42_clicked()
{
     ui -> pushButton_42 -> setHidden(true);
}


void MainWindow::on_pushButton_43_clicked()
{
     ui -> pushButton_43 -> setHidden(true);
}


void MainWindow::on_pushButton_44_clicked()
{
     ui -> pushButton_44 -> setHidden(true);
}


void MainWindow::on_pushButton_45_clicked()
{
     ui -> pushButton_45 -> setHidden(true);
}


void MainWindow::on_pushButton_46_clicked()
{
     ui -> pushButton_46 -> setHidden(true);
}


void MainWindow::on_pushButton_47_clicked()
{
     ui -> pushButton_47 -> setHidden(true);
}


void MainWindow::on_pushButton_48_clicked()
{
     ui -> pushButton_48 -> setHidden(true);
}


void MainWindow::on_pushButton_49_clicked()
{
     ui -> pushButton_49 -> setHidden(true);
}


void MainWindow::on_pushButton_5_clicked()
{
     ui -> pushButton_5 -> setHidden(true);
}


void MainWindow::on_pushButton_50_clicked()
{
     ui -> pushButton_50 -> setHidden(true);
}


void MainWindow::on_pushButton_51_clicked()
{
     ui -> pushButton_51 -> setHidden(true);
}


void MainWindow::on_pushButton_52_clicked()
{
     ui -> pushButton_52 -> setHidden(true);
}


void MainWindow::on_pushButton_53_clicked()
{
     ui -> pushButton_53 -> setHidden(true);
}


void MainWindow::on_pushButton_55_clicked()
{
     ui -> pushButton_55 -> setHidden(true);
}


void MainWindow::on_pushButton_57_clicked()
{
     ui -> pushButton_57 -> setHidden(true);
}


void MainWindow::on_pushButton_59_clicked()
{
     ui -> pushButton_59 -> setHidden(true);
}


void MainWindow::on_pushButton_6_clicked()
{
     ui -> pushButton_6 -> setHidden(true);
}


void MainWindow::on_pushButton_62_clicked()
{
     ui -> pushButton_62 -> setHidden(true);
}


void MainWindow::on_pushButton_63_clicked()
{
     ui -> pushButton_63 -> setHidden(true);
}


void MainWindow::on_pushButton_64_clicked()
{
     ui -> pushButton_64 -> setHidden(true);
}


void MainWindow::on_pushButton_65_clicked()
{
     ui -> pushButton_65 -> setHidden(true);
}


void MainWindow::on_pushButton_66_clicked()
{
     ui -> pushButton_66 -> setHidden(true);
}


void MainWindow::on_pushButton_67_clicked()
{
     ui -> pushButton_67 -> setHidden(true);
}


void MainWindow::on_pushButton_68_clicked()
{
     ui -> pushButton_68 -> setHidden(true);
}


void MainWindow::on_pushButton_69_clicked()
{
     ui -> pushButton_69 -> setHidden(true);
}


void MainWindow::on_pushButton_7_clicked()
{
     ui -> pushButton_7 -> setHidden(true);
}


void MainWindow::on_pushButton_70_clicked()
{
     ui -> pushButton_70 -> setHidden(true);
}


void MainWindow::on_pushButton_71_clicked()
{
     ui -> pushButton_71 -> setHidden(true);
}


void MainWindow::on_pushButton_72_clicked()
{
     ui -> pushButton_72 -> setHidden(true);
}


void MainWindow::on_pushButton_73_clicked()
{
     ui -> pushButton_73 -> setHidden(true);
}


void MainWindow::on_pushButton_77_clicked()
{
     ui -> pushButton_77 -> setHidden(true);
}


void MainWindow::on_pushButton_78_clicked()
{
     ui -> pushButton_78 -> setHidden(true);
}


void MainWindow::on_pushButton_79_clicked()
{
     ui -> pushButton_79 -> setHidden(true);
}


void MainWindow::on_pushButton_8_clicked()
{
     ui -> pushButton_8 -> setHidden(true);
}


void MainWindow::on_pushButton_80_clicked()
{
     ui -> pushButton_80 -> setHidden(true);
}


void MainWindow::on_pushButton_81_clicked()
{
     ui -> pushButton_81 -> setHidden(true);
}


void MainWindow::on_pushButton_9_clicked()
{
     ui -> pushButton_9 -> setHidden(true);
}


void MainWindow::on_pushbutton_82_clicked()
{
     ui -> pushbutton_82 -> setHidden(true);
}


void MainWindow::on_pushButton_14_clicked()
{
     ui -> pushButton_14 -> setHidden(true);
}


void MainWindow::on_no_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pause_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_yes_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui-> slime -> setHidden(false);
    ui-> DIE1 -> setHidden(false);
    ui-> DIE2 -> setHidden(false);
    ui-> DIE3 -> setHidden(false);
    ui-> DIE4 -> setHidden(false);
    ui-> DIE4 -> setHidden(false);
    ui-> DIE5 -> setHidden(false);
    ui-> DIE6 -> setHidden(false);
    ui-> DIE7 -> setHidden(false);
    ui-> DIE8 -> setHidden(false);
    ui-> DIE9 -> setHidden(false);
    ui-> DIE10 -> setHidden(false);
    ui -> pushButton_1 -> setHidden(false);
    ui -> pushButton_2 -> setHidden(false);
    ui -> pushButton_3 -> setHidden(false);
    ui -> pushButton_5 -> setHidden(false);
    ui -> pushButton_6 -> setHidden(false);
    ui -> pushButton_7 -> setHidden(false);
    ui -> pushButton_8 -> setHidden(false);
    ui -> pushButton_9 -> setHidden(false);
    ui -> pushButton_10 -> setHidden(false);
    ui -> pushButton_11 -> setHidden(false);
    ui -> pushButton_12 -> setHidden(false);
    ui -> pushButton_13 -> setHidden(false);
    ui -> pushButton_14 -> setHidden(false);
    ui -> pushButton_16 -> setHidden(false);
    ui -> pushButton_17 -> setHidden(false);
    ui -> pushButton_18 -> setHidden(false);
    ui -> pushButton_19 -> setHidden(false);
    ui -> pushButton_20 -> setHidden(false);
    ui -> pushButton_21 -> setHidden(false);
    ui -> pushButton_22 -> setHidden(false);
    ui -> pushButton_23 -> setHidden(false);
    ui -> pushButton_24 -> setHidden(false);
    ui -> pushButton_25 -> setHidden(false);
    ui -> pushButton_26 -> setHidden(false);
    ui -> pushButton_27 -> setHidden(false);
    ui -> pushButton_28 -> setHidden(false);
    ui -> pushButton_29 -> setHidden(false);
    ui -> pushButton_30 -> setHidden(false);
    ui -> pushButton_31 -> setHidden(false);
    ui -> pushButton_33 -> setHidden(false);
    ui -> pushButton_34 -> setHidden(false);
    ui -> pushButton_35 -> setHidden(false);
    ui -> pushButton_36 -> setHidden(false);
    ui -> pushButton_37 -> setHidden(false);
    ui -> pushButton_38 -> setHidden(false);
    ui -> pushButton_39 -> setHidden(false);
    ui -> pushButton_41 -> setHidden(false);
    ui -> pushButton_42 -> setHidden(false);
    ui -> pushButton_43 -> setHidden(false);
    ui -> pushButton_44 -> setHidden(false);
    ui -> pushButton_45 -> setHidden(false);
    ui -> pushButton_46 -> setHidden(false);
    ui -> pushButton_47 -> setHidden(false);
    ui -> pushButton_48 -> setHidden(false);
    ui -> pushButton_49 -> setHidden(false);
    ui -> pushButton_50 -> setHidden(false);
    ui -> pushButton_51 -> setHidden(false);
    ui -> pushButton_52 -> setHidden(false);
    ui -> pushButton_53 -> setHidden(false);
    ui -> pushButton_55 -> setHidden(false);
    ui -> pushButton_56 -> setHidden(false);
    ui -> pushButton_57 -> setHidden(false);
    ui -> pushButton_59 -> setHidden(false);
    ui -> pushButton_62 -> setHidden(false);
    ui -> pushButton_63 -> setHidden(false);
    ui -> pushButton_64 -> setHidden(false);
    ui -> pushButton_65 -> setHidden(false);
    ui -> pushButton_66 -> setHidden(false);
    ui -> pushButton_67 -> setHidden(false);
    ui -> pushButton_68 -> setHidden(false);
    ui -> pushButton_69 -> setHidden(false);
    ui -> pushButton_70 -> setHidden(false);
    ui -> pushButton_71 -> setHidden(false);
    ui -> pushButton_72 -> setHidden(false);
    ui -> pushButton_73 -> setHidden(false);
    ui -> pushButton_77 -> setHidden(false);
    ui -> pushButton_78 -> setHidden(false);
    ui -> pushButton_79 -> setHidden(false);
    ui -> pushButton_80 -> setHidden(false);
    ui -> pushButton_81 -> setHidden(false);
    ui -> pushbutton_82 -> setHidden(false);
}


void MainWindow::on_pushButton_clicked()
{

}

void MainWindow::on_DIE_clicked()
{

}

