//
// Created by max on 29.12.21.
//

#include "Item.h"
#include <string>

using namespace std;


void Item::printEan() {
    cout << this->code << endl;
}

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

string Item::getDescription() {
    return this->description;
}

Categories Item::getCategory() {
    return this->category;
}

//   Setters

string Item::setName(string &n) {
    this->name = n;
}

double Item::setPrice(double &p) {
    this->price = p;
    return this->price;
}

string Item::setDescription(string &d) {
    this->description = d;
    return this->description;
}

void Item::setCategory(Categories c) {
    this->category = c;
}

//    Operator overload

ostream &operator<<(ostream &output, Item &i) {
    output << i.code << ": " << i.name << " " << i.price << " Euro" << endl;
    output << i.description << endl;
    output << i.category << endl;
}

bool Item::inCategory(Categories) {
    return false;
}



