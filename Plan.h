class Plan {
private:
	int PlanID;
	char PlanType[20];
	double Price;
	int Duration;
public:
	Plan();
	void Storeplandetails(int id, const char type[], double price, int dur);
	void Updatedetails();
	void Displaydetails();
	~Plan();
};