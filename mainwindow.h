#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//include form
#include "result.h"

//include source
#include "sound.h"
#include "data.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    //timer slots
    void d_alpha_var_whiteState();
    void d_alpha_var_blackState();

    //pushButton slots
    void on_pushButton_test_clicked();

    void on_pushButton_gameStart_clicked();

    void on_pushButton_quit_clicked();

    void on_pushButton_skip_clicked();

private:
    Ui::MainWindow *ui;
    Sound *sound;
    Data *data;
    Result *result;
    QPixmap backgroundImage;
    QTimer timer;
    int rgba_r,rgba_g,rgba_b,rgba_a;

};

#endif // MAINWINDOW_H
