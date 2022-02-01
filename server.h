#include "HTTPMethods.h"
#include "HTTPCodes.h"
#include "HTTPRequest.h"

class Server
{
private:
    static char *StaticContent[];
    char* req;

    void GetRequest(HTTPMethods req, void *context){
        
        switch (req)
        {
        case 1:             
            
            break;
        case 2:

             break;
        }
    }
public:
    void listen(int *PORT){

    }
    void get(){
        HTTPRequest_t GET_t;
        GetRequest(GET_t.method, (void*)GET_t.path);
    }
    void post(){
        HTTPRequest_t POST_t;
        GetRequest(POST_t.method, (void*)POST_t.path);
    }
};
