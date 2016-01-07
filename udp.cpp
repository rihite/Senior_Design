#include "udp.h"


MyUDP::MyUDP(QObject *parent) :
    QObject(parent){

    socket = new QUdpSocket(this);
    socket->bind(QHostAddress::LocalHost,1234);

}

void MyUDP::SendMessage(QByteArray Data){
    socket->writeDatagram(Data,QHostAddress::LocalHost,1234);
}

void MyUDP::readyRead(QByteArray message,  quint16 sender_Port,   QString sender_addr){

    socket->bind(QHostAddress::LocalHost,1234);
    QHostAddress sender;                  // ip of the LAN
    sender.setAddress(sender_addr);       // sets senders address to the above string
    socket->readDatagram(message.data(),message.size(), &sender, &sender_Port);

    qDebug() << "Message from" << sender.toString();
    qDebug() << "Message Port" << sender_Port;
    qDebug() << "Message: " << message;
};

