#include "Guest.h"
#include <cstring>
#include <string>
using namespace std;

Guest::Guest()
{
	UID = 0;
	strcpy(Name, "");
	Email = "";
	Mobile = 0;
}
void Guest::registerguest(int id, const char name[], string email, int mob)
{
	UID = id;
	strcpy(Name, name);
	Email = email;
	Mobile = mob;
}
void Guest::searchitems(ShopItem* i)
{

}
void Guest::viewplan(Plan* p)
{

}
Guest::~Guest()
{

}