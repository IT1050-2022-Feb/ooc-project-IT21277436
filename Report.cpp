#include "Report.h"
#include <iostream>
#include <cstring>
using namespace std;

Report::Report()
{
	RepID = 0;
	strcpy(RepType, "");
	Description = "";
}

void Report::generatedailyreport(int id, const char type[], string des)
{
	RepID = id;
	strcpy(RepType, type);
	Description = des;
}

void Report::generatemonthlyreport()
{

}

void Report::displayreport()
{
	cout << RepID << endl;
	cout << RepType << endl;
	cout << Description << endl;
}

Report::~Report()
{

}