#pragma once
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class QListWidget;
class QStackedWidget;

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onNavChanged(int row);

private:
    void setupActions();
    void applyStyle();

private:
    Ui::MainWindow *ui;
    QListWidget *navList = nullptr;
    QStackedWidget *stack = nullptr;
};
