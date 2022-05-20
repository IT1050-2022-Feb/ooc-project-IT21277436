#include "OnlineSession.h"

#include <iostream>
#include <cstring>
using namespace std;

OnlineSession::OnlineSession()
{
	SessionID = 0;
	strcpy(SessionName, "");
	strcpy(Trainer, "");
}

void OnlineSession::storesessiondetails(int id, const char sname[], const char trainer[])
{
	SessionID = id;
	strcpy(SessionName, sname);
	strcpy(Trainer, trainer);
}

void OnlineSession::updatesessiondetails()
{

}
void OnlineSession::displaysessiondetails()
{
	cout << SessionID << endl;
	cout << SessionName << endl;
	cout << Trainer << endl << endl;
}

OnlineSession::~OnlineSession()
{

}
