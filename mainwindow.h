#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    double operacion(double a);
    double operacion2(double b);


private:
    Ui::MainWindow *ui;

public slots:
   void metodo();
   void limpiar();
};

#endif // MAINWINDOW_H
