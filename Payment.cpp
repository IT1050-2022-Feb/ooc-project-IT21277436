#include"Payment.h"
#include <iostream>
#include <cstring>

Payment::Payment()
{
	AccountNo = 0;
	strcpy(HolderName, "");
	strcpy(PaymentType, "");
}
void Payment::Storepaymentdetails(int acc, const char name[], const char type[])
{
}
void Payment::Validate()
{
}
Payment::~Payment()
{
}