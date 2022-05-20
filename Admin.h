#include <cstring>
#include "Report.h"
#include "RegisteredUser.h"
#include "ShopItem.h"

class Admin :public RegisteredUser {
private:
	int AID;
public:
	Admin(int id, const char name[], string email, int mob, const char uname[], const char pass[], int aid);
	void EditShop(ShopItem* s);
	void generateReport(Report* r);
	void viewRports(Report* r);
	void DeleteReport(Report* r);
	~Admin();
};