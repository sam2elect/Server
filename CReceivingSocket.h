#pragma once
#include <afxsock.h>
class CReceivingSocket :
    public CSocket
{
public:
    CReceivingSocket();
    virtual ~CReceivingSocket();
    virtual void OnReceive(int nErrorCode);
};

