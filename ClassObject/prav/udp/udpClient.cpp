#include <iostream>
#include "udpClient.h"
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <cstring>

UdpC::UdpC()
{
    cfd = socket(AF_INET, SOCK_DGRAM, 0);
    if (cfd == -1)
    {
        std ::cout << "socket error " << std ::endl;
    }

    len = sizeof(serveraddr);
}

void UdpC::setSockAdrr(const char *addrip, int port, const char *data)
{
    serveraddr.sin_family = AF_INET;
    serveraddr.sin_port = htons(port);
    serveraddr.sin_addr.s_addr = inet_addr(addrip);
    sendto(cfd, data, strlen(data), 0, (struct sockaddr *)&serveraddr, len);
}

void UdpC::recvData(char *recvbuf)
{
    recvfrom(cfd, recvbuf, 128, 0, (struct sockaddr *)&serveraddr, &len);
}

void UdpC::stop()
{
    close(cfd);
}

UdpC::~UdpC()
{
  
}

int main()
{

    UdpC C;
    char addrip[] = "172.16.104.92";
    int port = 7777;
    const char *data = "avb";
    char *recvBuf = new char[128];
    C.setSockAdrr(addrip, port, data);
    C.recvData(recvBuf);
    std ::cout << "recvBuf: " << recvBuf << std ::endl;
    delete[] recvBuf;
    C.stop();

    return 0;
}