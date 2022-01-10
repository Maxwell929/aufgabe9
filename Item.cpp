//
// Created by max on 29.12.21.
//

#include "Item.h"
#include <string>

using namespace std;


//    Constructors



Item::Item(string code, string name, double price, Categories category) : code(code), name(name), price(price),
                                                                          category(category) {}

Item::Item(string code) : code(code) {};


//  Getters

EanCode Item::getEanCode() const {
    return this->code;
}

double Item::getPrice() const {
    return this->price;
}

string Item::getDescription() const {
    return this->description;
}

Categories Item::getCategory() const{
    return this->category;
}

//   Setters

void Item::setName(const string &n) {
    this->name = n;
}

void Item::setPrice(const double &p) {
    this->price = p;
}

void Item::setDescription(const string &d) {
    this->description = d;
}

void Item::setCategory(const Categories &c) {
    this->category = c;
}

//    Operator overload

ostream &operator<<(ostream &output, Item &i) {
    output << i.code << ": " << i.name << " " << i.price << " Euro" << endl;
    output << i.description << endl;
    output << i.category << endl;
}

//other Methods

bool Item::inCategory(const Categories c) {
    if (this->category == c) return true;
    return false;
}



