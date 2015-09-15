#include "ConsoleConnect.h"
#include <Bridge.h>
#include <Console.h>

#include "Arduino.h"

CC::CC(){    
}

void CC::send(char *message){
    Console.print(message);
    Console.flush();
}

void CC::send(String message){
    Console.print(message);
    Console.flush();
}

void CC::sendLn(char *message){
    Console.println(message);
    Console.flush();
}

void CC::sendLn(String message){
    Console.println(message);
    Console.flush();
}

String CC::recieve(){
    char c = Console.read();
    String message;
    
    while (c != '\n') {
       message += c;
       c = Console.read();
    }
    return message;
}
