#include "TcpClient.h"
#include <cstring>
#include <iostream>
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <errno.h>
#include <cstring>

TCPC::TCPC(int port, const char *ip) : m_cfd(0), m_port(port), m_ip(ip)
{
    memset(&serverAddress, 0, sizeof(serverAddress));
    /* 端口 */
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(port);
    /* IP地址 */
    int ret = inet_pton(AF_INET, ip, (void *)&(serverAddress.sin_addr.s_addr));
    if (ret != 1)
    {
        perror("inet_pton error");
        exit(-1);
    }
}

bool TCPC::start()
{
    m_cfd = socket(AF_INET, SOCK_STREAM, 0);
    if (m_cfd == -1)
    {
        perror("socket error");
        return false;
    }

    int ret = connect(m_cfd, (struct sockaddr *)&serverAddress, sizeof(serverAddress));
    if (ret == -1)
    {
        perror("connect error");
        return false;
    }
    return true;
}

bool TCPC::sendData(char *sendBuf, int size)
{
    memset(sendBuf, 0, sizeof(sendBuf));
    ssize_t writeval = write(m_cfd, sendBuf, size);
    if (writeval == -1)
    {
        perror("write error");
        return false;
    }
    return true;
}

bool TCPC::readData(char *readBuf, int bufsize)
{
    memset(readBuf, 0, sizeof(readBuf));
    ssize_t readbyte = read(m_cfd, readBuf, sizeof(readBuf) - 1);
    if (readbyte == -1)
    {
        perror("read error");
        return false;
    }
    std ::cout << "recv " << readBuf << std ::endl;
    return true;
}

void TCPC::stop()
{
    close(m_cfd);
}

int main()
{
    TCPC TCPC(7777, "172.16.104.92");

    if (TCPC.start())
    {
        std ::cout << "connect  success" << std ::endl;
    }
    char sendbuf[128] = { 0 };
    TCPC.sendData(sendbuf, strlen(sendbuf));
    strncpy(sendbuf, "加油 254", sizeof(sendbuf) - 1);

    char recvbuf[128] = { 0 };
    TCPC.readData(recvbuf, strlen(recvbuf));
    sleep(5);

    TCPC.stop();

    return 0;

}