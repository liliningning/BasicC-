#ifndef _UDP_H
#define _UDP_H
#include <netinet/in.h>

class UdpC
{
public:
    UdpC();
    void setSockAdrr(const char *addrip, int port, const char *data);
    void recvData(char *recvbuf);
    void stop ();
    ~UdpC();

private:
    int cfd;
    struct sockaddr_in serveraddr;
    socklen_t len;
    const  int BUFRISE  = 128;
};

#endif