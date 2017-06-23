#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class QTabWidget;
class QTreeWidget;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void slotNewFile(const QString &str = QString());   //�½��ļ�

private:
    Ui::MainWindow *ui;

    QTreeWidget     *mProjectTreeWidget;    //�����ļ��б�
    QTabWidget      *mCodeTabWidget;        //������
};

#endif // MAINWINDOW_H
