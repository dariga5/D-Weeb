
typedef struct HTTPResponse_t{
     HTTPMethods method;
    char path[2048];
    char content[2048];
}HTTPResponse_t