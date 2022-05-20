class Payment
{
private:
	int AccountNo;
	char HolderName[30];
	char PaymentType[10];
public:
	Payment();
	void Storepaymentdetails(int acc, const char name[], const char type[]);
	void Validate();
	~Payment();
};