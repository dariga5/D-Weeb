#include "HTTPMethods.h"
#include "HTTPCodes.h"
#include "HTTPRequest.h"

class Server
{
private:
    static char *StaticContent[];
    HTTPcodes CreateRequest(HTTPMethods req, char *context){
        
        switch (req)
        {
        case 1:    

            return 200
            break;
        case 2:
            

             return 200
             break;
        }
        return 404
    }
public:
    void listen(int *PORT){

    }
    void get(char url[2048]){
        HTTPRequest_t GET_t;
        GET_t.method = GET;
        GET_t.path = url;
        GET_t.state = CreateRequest(GET_t.method, (char*)GET_t.path);
    }
    void post(char url[2048]){
        HTTPRequest_t POST_t;
        POST_t.method = POST;
        POST_t.path = url;
        POST_t.state = CreateRequest(POST_t.method, (char*)POST_t.path);
    }
};
