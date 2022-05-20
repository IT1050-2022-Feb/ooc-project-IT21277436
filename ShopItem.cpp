#include "ShopItem.h"
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

ShopItem::ShopItem()
{
    ItemID = 0;
    strcpy(ItemName, "");
    ItemPrice = 0.00;
    strcpy(ItemType, "");
    strcpy(ItemDescription, "");
}
void ShopItem::addshopitem(int id, const char name[], double price, const char type[], const char des[])
{
    ItemID = id;
    strcpy(ItemName, name);
    ItemPrice = price;
    strcpy(ItemType, type);
    strcpy(ItemDescription, des);

}
void ShopItem::updateshopitem()
{

}

void ShopItem::displayshopitem()
{
    cout << ItemID << endl;
    cout << ItemName << endl;
    cout << ItemPrice << endl;
    cout << ItemType << endl;
    cout << ItemDescription << endl;
}
ShopItem::~ShopItem()
{

}