#include <iostream>

#include "EanCode.h"
#include "Item.h"
#include "Shop.h"
#include "Statistic.h"

using namespace std;

int main() {

    try {
        Item butter("1547554221238", "Butter", 2.50, Food);
        Item milch("1278563406532", "Milch", 1.35, Drinks);
        Item sahne("1278553406532", "Sahne", 1.35, Food);
        cout << butter << endl;

        Shop buy24("www.buy24.de", "Buy24", "Neuestrasse", 9, 25478, "Berlin");
        cout << buy24 << endl;

        buy24.addItem(butter);
        buy24.addItem(milch);
        buy24.addItem(sahne);


        butter.setDescription("Biologische Bergbauernbutter");
        butter.setCategory(Food);

        buy24.setName("Buy25");



    }
    catch (const char *txtExeption) {
        cout << "Exeption: " << txtExeption << endl;
    }


    return 0;


}
