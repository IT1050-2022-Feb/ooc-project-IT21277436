#include "Trainer.h"
#include "Plan.h"
#include <iostream>
using namespace std;

Trainer::Trainer(int id, const char name[], string email, int mob, const char uname[], const char pass[], int tid, double sal, int ot)
{
	UID = id;
	strcpy(Name, name);
	Email = email;
	Mobile = mob;
	strcpy(Username, uname);
	strcpy(Password, pass);
	TID = tid;
	Salary = sal;
	OThours = ot;
}

void Trainer::Editplan(Plan* p)
{
	cout << "Edit plans" << endl;
}

Trainer::~Trainer()
{
	cout << "Destructor runs" << endl;
}