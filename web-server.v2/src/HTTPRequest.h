
typedef struct HTTPRequest_t{
    HTTPMethods method;
    HTTPcodes state;    
    char path[2048];
    char protocole[16];
}HTTPRequest_t;
