#include "Guest.h"
#include "Order.h"

class RegisteredUser : public Guest {

protected:
    char Username[20];
    char Password[20];
    int Weight;
    int Height;
    Order* order[5];
public:
    RegisteredUser();
    RegisteredUser(int id, const char name[], string email, int mob, const char uname[], const char pass[]);
    void updateBMI(int weight, int height);
    ~RegisteredUser();
};
