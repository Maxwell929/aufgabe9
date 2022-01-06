//
// Created by max on 29.12.21.
//

#ifndef OPERATING_OVERLOADING_ITEM_H
#define OPERATING_OVERLOADING_ITEM_H

#include <iostream>
#include <string>
#include "EanCode.h"

class Item {
    EanCode code;
    string name;
    string description{""};
    double price{+0};

public:

    Item(string code, string name, double price);

    EanCode getEanCode();

    string setDescription(string);

    string getDescription();

    void printEan();

    double getPrice();

    double setPrice(double price);

    string setName(string name);

    friend ostream &operator<<(ostream &output, Item &i);


};


#endif //OPERATING_OVERLOADING_ITEM_H
