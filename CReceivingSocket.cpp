#include "pch.h"
#include "CReceivingSocket.h"
#include "Server.h"

// CReceivingSocket

CReceivingSocket::CReceivingSocket()
{

}

CReceivingSocket::~CReceivingSocket()
{

}

void CReceivingSocket::OnReceive(int nErrorCode)
{
	// TODO: Add your specialized code here and/or call the base class

	char strRec[256] = "";
	Receive(strRec, 256);
	((CServerApp*)AfxGetApp())->m_pServerView->AddMsg(strRec);


	CSocket::OnReceive(nErrorCode);
}
