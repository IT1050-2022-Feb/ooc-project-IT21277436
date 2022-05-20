#include"Order.h"
#include <cstring>

Order::Order()
{
	OrderID = 0;
	strcpy(OrderItem, "");
	Amount = 0;
}
void Order::PlaceOrder(int id, const char item[], double amount)
{

}
void Order::ConfirmOrder()
{

}
Order::~Order()
{

}