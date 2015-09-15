#ifndef CONSOLECONNECT_H
#define CONSOLECONNECT_H

#include <Bridge.h>
#include <Console.h>

#include "Arduino.h"

class CC : public ConsoleClass{
    public:
        CC();
        void send(char *message);
        void send(String message);
        void sendLn(char *message);
        void sendLn(String message);
        String recieve();
};

#endif
