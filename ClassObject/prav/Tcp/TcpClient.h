#ifndef _TCPCLIENT_
#define _TCPCLIENT_
#include <netinet/in.h>


class TCPC
{
    public:
        TCPC(int port,   const char * ip);
        bool start();
        bool sendData(char * sendBuf, int size);
        bool readData(char * readBuf, int bufsize);
        void stop();


private:

    int m_cfd;
    int m_port;
    const char * m_ip;
    struct sockaddr_in serverAddress;



};
#endif