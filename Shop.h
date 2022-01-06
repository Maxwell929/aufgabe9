//
// Created by maximilian on 06.01.22.
//
#include <iostream>
#include <string>
#include <vector>
#include "Item.h"

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

    friend ostream &operator<<(ostream &output, Shop &s);

    Shop(string url, string name, string road, int streetNumber, int zipCode, string City);

    Shop();

    void setUrl(string url);

    void setName(string name);

    void setAdress(string road, int streetNumber, int zipCode, string City);

    void addItem(const Item &);

    Item &findItem(const EanCode &code);

    friend bool operator==(const EanCode &code1, const EanCode &code2);
};

#endif //OPERATING_OVERLOADING_SHOP_H
