#include"Plan.h"
#include <iostream>
#include<cstring>
using namespace std;

Plan::Plan() {
	PlanID = 0;
	strcpy(PlanType, "");
	Price = 0.0;
	Duration = 0;
}
void Plan::Storeplandetails(int id, const char type[], double price, int dur)
{
	PlanID = id;
	strcpy(PlanType, type);
	Price = price;
	Duration = dur;
}
void Plan::Updatedetails()
{

}
void Plan::Displaydetails()
{
	cout << PlanID << endl;
	cout << PlanType << endl;
	cout << Price << endl;
	cout << Duration << endl << endl;
}
Plan::~Plan()
{

}