class ShopItem {
private:
    int ItemID;
    char ItemName[20];
    double ItemPrice;
    char ItemType[10];
    char ItemDescription[100];

public:
    ShopItem();
    void addshopitem(int id, const char name[], double price, const char type[], const char des[]);
    void updateshopitem();
    void displayshopitem();
    ~ShopItem();

};