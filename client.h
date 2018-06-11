//
// Created by jleveau on 06/06/18.
//

#ifndef CLIENT_CLIENT_H
#define CLIENT_CLIENT_H
#include "string.h"


class Client {

    public:int connectToHost(std::string hostname, int port);

    void sendData();

    void receiveData();

    void closeConnection();


};


#endif //CLIENT_CLIENT_H
