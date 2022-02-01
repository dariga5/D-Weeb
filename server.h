#include "HTTPMethods.h"
#include "HTTPCodes.h"

class Server
{
private:
    char req;



    void GetRequest(const char *req, const HTTPMethods method){
        
        switch (method)
        {
        case 1:
            
            
            break;
        case 2:

             
             break;
        }
    }
public:
    int Init(){


        return 1;
    }
    void listen(int *PORT){

    }
    void GET(){
        GetRequest((char*)req, (HTTPMethods)1);
    }
    void POST(){
        GetRequest((char*)req, (HTTPMethods)2);
    }
};
