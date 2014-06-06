#ifndef RECEIVER_H
#define RECEIVER_H
#include <iostream>
#include <QObject>
#include <stdexcept>
#include <exception>
#include "sender.h"

class Receiver: QObject
{
    Q_OBJECT

public:
    Receiver();
    Receiver(Sender *sig_origin);

public slots:

    void slotDataEvent(QString data);
};

#endif // RECEIVER_H
