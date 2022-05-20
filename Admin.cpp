#include "Admin.h"
#include "ShopItem.h"
#include "Report.h"
#include "RegisteredUser.h"
#include <iostream>
using namespace std;

Admin::Admin(int id, const char name[], string email, int mob, const char uname[], const char pass[], int aid)
{
	UID = id;
	strcpy(Name, name);
	Email = email;
	Mobile = mob;
	strcpy(Username, uname);
	strcpy(Password, pass);
	AID = aid;
}

void Admin::EditShop(ShopItem* s)
{
	cout << "Edit shop" << endl;
}

void Admin::viewRports(Report* r)
{
	cout << "View Report" << endl;
}

void Admin::DeleteReport(Report* r)
{
	cout << "Delete reports" << endl;
}

void Admin::generateReport(Report* r)
{
	cout << "Reports generated" << endl;
}

Admin::~Admin()
{
	cout << "Destructor runs" << endl;
}
