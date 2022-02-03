#include "HTTPMethods.h"
#include "HTTPCodes.h"
#include "HTTPRequest.h"


class Server
{
private:
    static char *StaticContent;
public:
    void Init(){
        StaticContent = (char*)"";

    }
    void listen(int PORT){

    }
    void *get(char *url[2048]){
        HTTPRequest_t GET_t;
        GET_t.method = GET;
        GET_t.state = CreateRequest(GET_t.method, (char*)GET_t.path);
        return ReturnResponse(GET_t.state);
    }
    void *post(char *url[2048]){
        HTTPRequest_t POST_t;
        POST_t.method = POST;
        POST_t.state = CreateRequest(POST_t.method, (char*)POST_t.path);
        return ReturnResponse(POST_t.state);
    }
    HTTPcodes CreateRequest(HTTPMethods req, char *context){
        
        switch (req)
        {
        case 1:   
        
            return OK;
            break;
        case 2:
            

             return OK;
             break;
        }
        return NOT_FOUND;
    }
    void *ReturnResponse(HTTPcodes code){
        
        switch (code)
        {
            case CONTINUE:

              break;
            case OK:

                break;
            case CREATED:

                break;
            case ACCEPTED:

                break;
            case BAD_REQUEST:
        
                break;
            case FORBIDDEN:

                break;
            case NOT_FOUND:

                break;
        }
        return StaticContent;
    }
};
