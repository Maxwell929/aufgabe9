//
// Created by maximilian on 06.01.22.
//

#include "Shop.h"
#include "EanCode.h"
#include <iostream>
#include <string>
#include <vector>
#include "Item.h"

using namespace std;

Shop::Shop(string url, string name, string road, int streetNumber, int zipCode, string city) : url(
        url), name(name), road(road), streetNumber(streetNumber), zipCode(zipCode), city(city) {}

Shop::Shop() {};

void Shop::setUrl(string url) {
    this->url = url;
}

void Shop::setName(string name) {
    this->name = name;
}

void Shop::setAdress(string road, int streetNumber, int zipCode, string City) {
    this->road = road;
    this->streetNumber = streetNumber;
    this->zipCode = zipCode;
    this->city = city;
};

ostream &operator<<(ostream &output, Shop &s) {
    output << s.url << endl;
    output << s.name << endl;
    output << s.road << " " << s.streetNumber << endl;
    output << s.zipCode << " " << s.city << endl;
};


//bool operator==(const EanCode &code1, const EanCode &code2) {
//    if (code1 == code2 or code2 == code1) { return false; }
//}

Item &Shop::findItem(const EanCode &code) {
    for (Item item: items) {
        if (item.getEanCode().getEan() == code.getEan()) {
            cout<< "Item found" << endl;
            return item;
        } else {
            cout << "No Item"<< endl;
//
        }
    }
}

void Shop::addItem(const Item &item) {
    this->items.push_back(item);
}




