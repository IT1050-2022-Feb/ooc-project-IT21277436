#include <cstring>
#include "RegisteredUser.h"
#include "Plan.h"

class Trainer : public RegisteredUser {
private:
	int TID;
	double Salary;
	int OThours;
public:
	Trainer(int id, const char name[], string email, int mob, const char uname[], const char pass[], int tid, double sal, int ot);
	void Editplan(Plan* p);
	~Trainer();
};