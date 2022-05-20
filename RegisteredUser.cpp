#include "RegisteredUser.h"
#include "Guest.h"
#include <cstring>
#include <string>

RegisteredUser::RegisteredUser()
{

}
RegisteredUser::RegisteredUser(int id, const char name[], string email, int mob, const char uname[], const char pass[])
{
    UID = id;
    strcpy(Name, name);
    Email = email;
    Mobile = mob;
    strcpy(Username, uname);
    strcpy(Password, pass);
}
void RegisteredUser::updateBMI(int weight, int height)
{
    Weight = weight;
    Height = height;
}

RegisteredUser::~RegisteredUser()
{

}