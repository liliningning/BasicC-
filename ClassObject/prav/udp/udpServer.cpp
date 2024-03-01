#include <iostream>
#include "udpServer.h"
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <errno.h>
#include <cstring>

UdpS::UdpS()
{
     sfd = socket(AF_INET, SOCK_DGRAM, 0);
    if (sfd == -1)
    {
        perror("fd create error");
        exit(-1);
    }
}

void UdpS::setSockAdrr(int port)
{
    memset(&localsockaddr, 0, sizeof(localsockaddr));
    memset(&clientaddr, 0, sizeof(clientaddr));
    localsockaddr.sin_family = AF_INET;
    localsockaddr.sin_port = htons(port);
    localsockaddr.sin_addr.s_addr = htonl(INADDR_ANY);


    len = sizeof(localsockaddr);
    length = sizeof(clientaddr);
    int ret = bind(sfd, (struct sockaddr *)&localsockaddr, len);
    if (ret == -1)
    {
        perror("bind error");
        exit(-1);
    }

}
void UdpS::recvData(char *recvbuf)
{
    recvfrom(sfd, recvbuf, 128, 0, (struct sockaddr *)&clientaddr, &length);
}

void UdpS::sendData(char *sendbuf)
{
    char * sendBuf = new char[128];
    sendto(sfd, sendbuf, strlen(sendbuf), 0, (struct sockaddr *)&clientaddr, length);
}

void UdpS::stop()
{
    close(sfd);
}


int main()
{
    UdpS  S;
    int port = 7777;
    char * recvBuf = new char[128]; 
    char * sendBuf = new char[128]; 

    S.recvData(recvBuf);
    S.sendData (sendBuf);

    delete[] recvBuf;
    delete[] sendBuf;

    return 0;
}