//
// Created by maximilian on 06.01.22.
//
#include <iostream>
#include <string>
#include <vector>
#include "Item.h"
#include "Statistic.h"

using namespace std;

#ifndef OPERATING_OVERLOADING_SHOP_H
#define OPERATING_OVERLOADING_SHOP_H


class Shop {

    string url;
    string name;
    string road;
    int streetNumber;
    int zipCode;
    string city;
    vector<Item> items;

public:

//    Constructors

    Shop(string url, string name, string road, int streetNumber, int zipCode, string City);

    Shop();

//    getter

    vector<Item> getItems() const;

    Item findItem(const EanCode &code);

//    setter

    void setUrl(const string &u);

    void setName(const string &n);

    void setAddress(const string &r, const int &stNr, const int &zipC, const string &c);

//    other methods

    void addItem(const Item &);

    Statistic statistics(const vector<Categories> &c);

    bool delItem(const EanCode &code);

//    operator overload

    friend ostream &operator<<(ostream &output, Shop &s);

    friend bool operator==(const EanCode &code1, const EanCode &code2);

    friend bool operator!=(const EanCode &code1, const EanCode &code2);


};


#endif //OPERATING_OVERLOADING_SHOP_H
