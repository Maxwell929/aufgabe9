#include <iostream>

#include "EanCode.h"
#include "Item.h"
#include "Shop.h"

using namespace std;

int main() {

int typen [21];

    vector<Item> items;

    Item butter("1547554221238", "Butter", 2.50);
    Item milch("1278563406532", "Milch", 1.35);
    Item sahne("1278553406532", "Sahne", 1.35);

    items.push_back(butter);
    items.push_back(milch);

    Shop buy24("www.buy24.de", "Buy24", "Herrengasse", 9, 39021, "Latsch");

    buy24.addItem(butter);
    buy24.addItem(milch);

    buy24.findItem(sahne.getEanCode());


//    cout << butter.getPrice() << endl;
//    butter.setPrice(3);
//    cout << butter.getPrice() << endl;
//    cout << milch.getPrice() << endl;
//    milch.printEan();
////    milch.setDescription("Südtiroler Bergbauernmilch aus 100% Heu!");
//
//    cout << milch;
//
//    Shop derShop;
//
//    derShop.setName("Buy24");
//    derShop.setUrl("www.derShop.at");
//    cout << derShop;


    return 0;


}
