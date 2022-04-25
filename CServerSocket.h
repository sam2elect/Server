#pragma once
#include <afxsock.h>
class CServerSocket :
    public CSocket
{
public:
    CServerSocket();
    virtual ~CServerSocket();
    virtual void OnAccept(int nErrorCode);
    virtual void OnReceive(int nErrorCode);
};

