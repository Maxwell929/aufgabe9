#include <iostream>

#include "EanCode.h"
#include "Item.h"
using namespace std;

int main() {



Item butter ("154755421238", "Butter", 2.50);
Item milch("1278563406532", "Milch", 1.35);


butter.printEan() ;

cout <<butter.getPrice() << endl;
butter.setPrice(3);
cout <<butter.getPrice() << endl;
cout << milch.getPrice() << endl;
milch.printEan();
milch.setDescription("Südtiroler Bergbauernmilch aus 100% Heu!");

cout <<milch.getDescription();
    return 0;



}
