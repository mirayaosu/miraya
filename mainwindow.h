#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QJsonObject>

namespace Ui {
  class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

private slots:
  void on_actionStart_Setup_triggered();

  void on_actionGithub_triggered();

  void on_actionDiscord_triggered();

  void on_setupFinished(QJsonObject json);

private:
  Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
