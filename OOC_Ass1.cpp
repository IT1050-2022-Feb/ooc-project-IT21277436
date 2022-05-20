#include "OnlineSession.h"
#include "Report.h"
#include "Plan.h"
#include "Guest.h"
#include "BMI.h"
#include "RegisteredUser.h"
#include "ShopItem.h"
#include "Admin.h"
#include "Trainer.h"
#include "Order.h"
#include "Payment.h"

int main()
{
	OnlineSession* session1;
	session1 = new OnlineSession();
	session1->storesessiondetails(1, "Body Bulding", "James Calter");
	session1->displaysessiondetails();

	Report* report1;
	report1 = new Report();
	report1->generatedailyreport(101, "Summary", "Daily Report\nCustomers registered : 25\nIncome : $1200");
	report1->displayreport();

	

	RegisteredUser* reguser1;
	reguser1 = new RegisteredUser(002, "Madhuka dilshan", "maduka@gmail.com", 0712331232, "madhukaD", "madhuka12345");
	reguser1->updateBMI(60, 175);

	ShopItem* item1;
	item1 = new ShopItem();
	item1->addshopitem(01, "Whey protein", 2000.0, "supplements", "chocolate flavored whey protein powder");
	item1->updateshopitem();
	item1->displayshopitem();

	Plan* plan1;
	plan1 = new Plan();
	plan1->Storeplandetails(05, "Fat Loss", 5000.0, 3);
	plan1->Displaydetails();

	Guest* guest1;
	guest1 = new Guest();
	guest1->registerguest(001, "Udara sampath", "udara@gmail.com", 0713212233);
	guest1->searchitems(item1);
	guest1->viewplan(plan1);

	Admin* admin1;
	admin1 = new Admin(003, "Kamal", "kamal@gmail.com", 0714324156, "kamal", "kamal12345", 001);
	admin1->EditShop(item1);
	admin1->generateReport(report1);
	admin1->DeleteReport(report1);
	admin1->viewRports(report1);

	Trainer* trainer1;
	trainer1 = new Trainer(004, "Sanath", "sanath@gmail.com", 0775754702, "sanath", "sanath", 001, 10000.00, 10);
	trainer1->Editplan(plan1);

	BMI* bmi1;
	bmi1->Displaybmi();

	Order* order1;
	order1 = new Order();

	Payment* payment1;
	payment1 = new Payment();

	delete session1;
	delete report1;
	delete guest1;
	delete reguser1;
	delete item1;
	delete plan1;
	delete admin1;
	delete trainer1;
	delete order1;
	delete payment1;

	return 0;
}