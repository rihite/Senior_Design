#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "udp.h"
#include <QCoreApplication>

QByteArray Buffer;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
//(QByteArray message,  quint16 senderPort,   QString sender_addr)
    MyUDP server;
    MyUDP client;

    quint16 sender_Port;
    QString sender_address;
    QByteArray Data;


    sender_Port = ui->port_edit->text().toInt();
    sender_address = ui->host_ip_edit->text();
    Buffer = "";

   // Buffer.append("Message sent");
    Buffer.append(ui->lineEdit->text());

    client.readyRead(Buffer,sender_Port,sender_address);
    client.SendMessage(Buffer);

}

void MainWindow::on_lineEdit_returnPressed()
{

}
