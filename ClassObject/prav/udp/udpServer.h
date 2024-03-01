#ifndef _UDP_H
#define _UDP_H
#include <netinet/in.h>

class UdpS
{
public:
    UdpS();
    void setSockAdrr(int port);
    void recvData(char *recvbuf);
    void sendData(char *sendbuf);
    void stop();

private:
    int sfd;
    struct sockaddr_in localsockaddr;
    socklen_t len ;
    struct sockaddr_in clientaddr;
    socklen_t length ;
};

#endif