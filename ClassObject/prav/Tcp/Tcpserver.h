#ifndef _TCPSERVER_H_
#define _TCPSERVER_H_
#include <netinet/in.h>
class TCPS
{

public:
    TCPS(int port);
    bool start();
    bool sendRecv(char * buf, int bufsize);

    void stop ();

private:
    int m_sfd;
    int m_acceptfd;
    int m_port;
    struct sockaddr_in localAddress;
    struct sockaddr_in clientAddress;
    const int MAX_LISTEN = 128;
    socklen_t localAddressLen;
    socklen_t clientAddressLen;
};

#endif
