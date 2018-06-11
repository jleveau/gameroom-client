#include <iostream>
#include "client.h"

int main() {
    std::cout << "Starting client" << std::endl;
    Client* client = new Client();

    client->connectToHost("thompson", 3004);
    return 0;
}