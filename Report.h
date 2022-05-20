#include <string>

class Report {
private:
	int RepID;
	char RepType[10];
	string Description;
public:
	Report();
	void generatedailyreport(int id, const char type[], string des);
	void generatemonthlyreport();
	void displayreport();
	~Report();
};