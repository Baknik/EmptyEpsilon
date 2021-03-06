#ifndef HTTP_SCRIPT_ACCESS_H
#define HTTP_SCRIPT_ACCESS_H

#include "httpServer.h"

class HttpScriptHandler : public HttpRequestHandler
{
public:
    virtual bool handleRequest(HttpRequest& request, HttpServerConnection* connection);
};

#endif//HTTP_SCRIPT_ACCESS_H
