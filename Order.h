class Order
{
private:
	int OrderID;
	char OrderItem[20];
	double Amount;
public:
	Order();
	void PlaceOrder(int id, const char item[], double amount);
	void ConfirmOrder();
	~Order();
};
