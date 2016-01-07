#ifndef UDP_H
#define UDP_H

#include <QObject>
#include <QUdpSocket>





class MyUDP : public QObject{

        Q_OBJECT

public:
    explicit MyUDP(QObject *parent=0);
    void SendMessage(QByteArray Data);
    QUdpSocket *socket;


signals:



public slots:
    void readyRead(QByteArray message,  quint16 sender_Port,   QString sender_addr);

private:


};




#endif //UDP_H
