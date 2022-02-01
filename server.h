#include "HTTPMethods.h"
#include "HTTPCodes.h"
#include "HTTPRequest.h"

class Server
{
private:
    static char *StaticContent[];
    void CreateRequest(HTTPMethods req, char *context){
        
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
        CreateRequest(GET, (char*)GET_t.path);
    }
    void post(){
        HTTPRequest_t POST_t;
        CreateRequest(POST, (char*)POST_t.path);
    }
};
