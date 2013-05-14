/*
This file is part of QSTLink2.

    QSTLink2 is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QSTLink2 is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with QSTLink2.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <stlinkv2.h>
#include <devices.h>
#include <QString>
#include <QFileDialog>
#include <QFile>
#include <QByteArray>
#include "dialog.h"
#include "transferthread.h"

#define qInformal() qWarning()

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    transferThread *tfThread;

public slots:
    bool Connect();
    void Disconnect();
    void updateProgress(const quint32 &p);
    void updateStatus(const QString &s);
    void Send(const QString &path, const bool &erase);
    void Receive(const QString &path);
    void eraseFlash();
    void showHelp();

private:
    Ui::MainWindow *ui;
    Dialog dialog;
    stlinkv2 *stlink;
    DeviceList *devices;
    QString filename;
    QString username;
    bool isroot;

private slots:
    void lockUI(bool enabled);
    void log(const QString &s);
    void getVersion();
    void getMode();
    bool getMCU();
    void getStatus();
    void Send();
    void Receive();
    void ResetMCU();
    void HardReset();
    void RunMCU();
    void HaltMCU();
    void setModeJTAG();
    void setModeSWD();

    // Use "auto-connect" for new GUI buttons... a bit more convenient
    void on_b_sendLast_clicked();
};

#endif // MAINWINDOW_H
