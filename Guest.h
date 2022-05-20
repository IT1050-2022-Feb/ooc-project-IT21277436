#include "ShopItem.h"
#include "Plan.h"
using namespace std;
class Guest {
protected:
    int UID;
    char Name[20];
    string Email;
    int Mobile;
public:
    Guest();
    void registerguest(int id, const char name[], string email, int mob);
    void searchitems(ShopItem* i);
    void viewplan(Plan* p);
    ~Guest();
};