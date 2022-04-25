#include "pch.h"
#include "CServerSocket.h"
#include "Server.h"
#include "CReceivingSocket.h"


// CServerSocket

CServerSocket::CServerSocket()
{

}

CServerSocket::~CServerSocket()
{

}

CReceivingSocket m_ReceiveingSocket;
void CServerSocket::OnAccept(int nErrorCode)
{
	// TODO: Add your specialized code here and/or call the base class
	
	((CServerApp*)AfxGetApp())->m_pServerView->AddMsg("Connection Successfull");
	Accept(m_ReceiveingSocket);

	CSocket::OnAccept(nErrorCode);
}


void CServerSocket::OnReceive(int nErrorCode)
{
	// TODO: Add your specialized code here and/or call the base class
	AfxMessageBox("Data Received");
	CSocket::OnReceive(nErrorCode);
}
