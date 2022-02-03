#include "server.h"


#define PORT 80

const char *ssid = "D-weeb";
const char *password = "D-weeb";
Server server;

int main(){
    server.Init();
    server.listen(PORT);

    while (true){
        
    }
   
    return 0;
}