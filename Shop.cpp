//
// Created by maximilian on 06.01.22.
//
#include <iostream>
#include <string>
#include <vector>

#include "Shop.h"
#include "EanCode.h"
#include "Item.h"
#include "Statistic.h"

using namespace std;

//Constructors

Shop::Shop(string url, string name, string road, int streetNumber, int zipCode, string city) : url(
        url), name(name), road(road), streetNumber(streetNumber), zipCode(zipCode), city(city) {}

Shop::Shop() {};

//operator overload

ostream &operator<<(ostream &output, Shop &s) {
    output << s.url << endl;
    output << s.name << endl;
    output << s.road << " " << s.streetNumber << endl;
    output << s.zipCode << " " << s.city << endl;
    return output;
}

bool operator==(const EanCode &code1, const EanCode &code2) {
    return (code1.getEan() == code2.getEan());
}

bool operator!=(const EanCode &code1, const EanCode &code2) {
    return (code1.getEan() != code2.getEan());
}

//getter


vector<Item> Shop::getItems() const {
    return this->items;
}

//setter

void Shop::setUrl(const string &u) {
    this->url = u;
}

void Shop::setName(const string &n) {
    this->name = n;
}

void Shop::setAddress(const string &r, const int &stNr, const int &zipC, const string &c) {
    this->road = r;
    this->streetNumber = stNr;
    this->zipCode = zipC;
    this->city = c;

}

//other methods

Item Shop::findItem(const EanCode &code) {
    for (Item &item: items) {
        if (item.getEanCode() == code) {
            cout << "Item found" << endl;
            return item;
        }
    }
    throw "does not exist";
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

Statistic Shop::statistics(const vector<Categories> &c) {

    double cheapest{0};
    double expensive{0};
    vector<Item> cheap;
    vector<Item> exp;
    double average = 0;

    for (const Item &i: items) {
        if (i.getPrice() < cheapest || i.getPrice() > 0) {
            cheapest = i.getPrice();
            cheap = {i};
        }
        if (i.getPrice() > expensive) {
            expensive = i.getPrice();
            exp = {i};
        }
        average += i.getPrice();
    }
    average = average / this->items.size();

    return Statistic{cheap.at(0), exp.at(0), average};;

}







