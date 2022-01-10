//
// Created by max on 29.12.21.
//

#ifndef OPERATING_OVERLOADING_ITEM_H
#define OPERATING_OVERLOADING_ITEM_H

#include <iostream>
#include <string>
#include "EanCode.h"

enum Categories {
    Food, Electronics, Drinks
};

class Item {

    EanCode code;
    string name;
    string description{"No description"};
    double price{+0};
    Categories category;

public:

//    Constructors

    explicit Item(string code, string name, double price, Categories category);

    explicit Item(string code);


//  Getters

    EanCode getEanCode() const;

    string getDescription();

    double getPrice() const;

    Categories getCategory();

//   Setters

    string setDescription(string &d);

    double setPrice(double &p);

    string setName(string &n);

    void setCategory(Categories c);

//    Other methods

    void printEan();

    bool inCategory(Categories);

//    Operator overload

    friend ostream &operator<<(ostream &output, Item &i);

};


#endif //OPERATING_OVERLOADING_ITEM_H
