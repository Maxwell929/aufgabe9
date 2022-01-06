//
// Created by max on 29.12.21.
//

#include "Item.h"
#include <string>

using namespace std;



void Item::printEan() {
    cout << this->code << endl;
}

Item::Item(string code, string name, double price) : code(code), name(name), price(price) {}


EanCode Item::getEanCode() {
    return this->code;
}

double Item::getPrice() {
    return this->price;
};

double Item::setPrice(double price) {
    this->price = price;
    return this->price;
};

string Item::setName(string name) {
    this->name = name;
};


string Item::setDescription(string description) {
    this->description = description;
    return this->description;
};

string Item::getDescription() {
    return this->description;
};

ostream &operator<<(ostream &output, Item &i) {
    output << i.code << ": " << i.name << " " << i.price << " Euro" << endl;
    output << i.description << endl;
};

