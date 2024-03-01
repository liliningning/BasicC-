#include "Tcpserver.h"
#include <iostream>
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <errno.h>
#include <cstring>

TCPS::TCPS(int port) : m_port(port), m_sfd(0)
{
     m_sfd = socket(AF_INET, SOCK_STREAM, 0);
    if (m_sfd == -1)
    {
        perror("socket error");
        exit(-1);
    }

    /* 清除脏数据 */
    memset(&localAddress, 0, sizeof(localAddress));
    /* 地址族 */
    localAddress.sin_family = AF_INET;
    /* 端口需要转成大端 */
    localAddress.sin_port = htons(port);
    /* ip地址需要转成大端 */
    /* Address to accept any incoming messages.  */
    /* INADDR_ANY = 0x00000000 */
    localAddress.sin_addr.s_addr = htonl(INADDR_ANY);

     localAddressLen = sizeof(localAddress);
}

bool TCPS::start()
{

    int ret = bind(m_sfd, (struct sockaddr *)&localAddress, localAddressLen);
    if (ret == -1)
    {
        perror("bind error");
        return false;
    }

    /* 监听 */
    ret = listen(m_sfd, MAX_LISTEN);
    if (ret == -1)
    {
        perror("listen error");
        return false;
    }
    return true;
}
bool TCPS::sendRecv(char *buf, int bufsize)
{   
    /* 客户的信息 */
    memset(&clientAddress, 0, sizeof(clientAddress));
    clientAddressLen = sizeof(clientAddress);
    m_acceptfd = accept(m_sfd, (struct sockaddr *)&clientAddress, &clientAddressLen);
    if (m_acceptfd == -1)
    {
        perror("accpet error");
        return false;
    }
    ssize_t readBytes = 0;
    
    while (1)
    {
        readBytes = read(m_acceptfd, buf, sizeof(buf));
        if (readBytes <= 0)
        {
            perror("read eror");
            close(m_acceptfd);
            break;
        }
        else
        {
            /* 读到的字符串 */
            std :: cout << "buf" << buf << std :: endl;
            sleep(3);

            char replyBuffer[128] = "一起加油";
            write(m_acceptfd, replyBuffer, sizeof(replyBuffer));
            
        }
    }
    return true;
}
void TCPS::stop()
{
    close(m_sfd);
    close(m_acceptfd);
}

int main()
{

    TCPS TCPS (7777);
   if( TCPS.start() )
    {
        std :: cout << "bind listen success " << std :: endl;
    }
    char buf[128] = { 0 };
    TCPS.sendRecv(buf, strlen(buf));
    TCPS.stop();

    return 0;
}
