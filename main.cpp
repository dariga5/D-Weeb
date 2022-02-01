#include "server.h"

#define PORT 80

Server server;

int main(){

    server.listen((int*)PORT);

    while (true){
        
    }
   
    return 0;
}