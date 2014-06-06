#include "receiver.h"

Receiver::Receiver()
{
}

Receiver::Receiver(Sender *sig_origin)
{


    QObject::connect(sig_origin, SIGNAL(signalDataEvent(QString)),this, SLOT(slotDataEvent(QString)));

}

void Receiver::slotDataEvent(QString data)
{
    try{
        std::cout<<"I got the data: "<<data.toStdString()<<std::endl;
    }
    catch (std::exception& ex){
        std::cerr<<ex.what()<<std::endl;
    }
}
