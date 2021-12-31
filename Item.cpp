//
// Created by max on 29.12.21.
//

#include "Item.h"
#include <string>

using namespace std;

void Item::printEan() {
  code.check();
//  cout << code;
}

Item::Item(string code, string name, double price) :code(code), name(name), price(price){}


double Item::getPrice(){
    return this->price;
};

double Item::setPrice(double price) {
    this->price= price;
    return this->price;
};

string Item::setName(string name){
    this->name = name;
};


string Item::setDescription(string description){
    this->description = description;
    return this->description;
};
string Item::getDescription(){
    return this->description;
};