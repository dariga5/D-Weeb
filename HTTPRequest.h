#include "HTTPMethods.h"

typedef struct HTTPRequest_t{
    HTTPMethods method;
    char *path[2048];
    char protocole[16];
}HTTPRequest_t;
