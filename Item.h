//
// Created by max on 29.12.21.
//

#ifndef OPERATING_OVERLOADING_ITEM_H
#define OPERATING_OVERLOADING_ITEM_H

#include <iostream>
#include <string>
#include "EanCode.h"

using namespace std;

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

     Item(string code, string name, double price, Categories category);

     Item(string code);

//    Operator overload

    friend ostream &operator<<(ostream &output, Item &i);

//  Getters

    EanCode getEanCode() const;

    string getDescription() const;

    double getPrice() const;

     Categories getCategory() const;

//   Setters

    void setDescription(const string &d);

    void setPrice(const double &p);

    void setName(const string &n);

    void setCategory(const Categories &c);

//    Other methods

    bool inCategory(Categories);



};


#endif //OPERATING_OVERLOADING_ITEM_H
