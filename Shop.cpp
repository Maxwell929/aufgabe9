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

void Shop::setUrl(string &url) {
    this->url = url;
}

void Shop::setName(string &name) {
    this->name = name;
}

void Shop::setAdress(string road, int streetNumber, int zipCode, string city) {
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


bool operator==(const EanCode &code1, const EanCode &code2) {
    return (code1.getEan() == code2.getEan());
}

bool operator!=(const EanCode &code1, const EanCode &code2) {
    return (code1.getEan() != code2.getEan());
}

Item &Shop::findItem(const EanCode &code) {
    for (Item &item: items) {
        if (item.getEanCode() == code) {
            cout << "Item found" << endl;
            return item;
        }
    }
    throw "does not exist";
}


vector<Item> Shop::getItems() {
    return this->items;
}


void Shop::addItem(const Item &item) {
    for (const Item &i: items) {
        if (i.getEanCode() == item.getEanCode()) {
            throw "Item already in Store";
        }
    }
    this->items.push_back(item);

}

bool Shop::delItem(const EanCode &code) {
    for (auto i = items.begin(); i != items.end(); ++i)
        if (i->getEanCode() == code) {
            this->items.erase(i);
            return true;
        };
    return false;
}


//    this->items.push_back(item);





