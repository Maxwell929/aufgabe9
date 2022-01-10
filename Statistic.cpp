//
// Created by maximilian on 10.01.22.
//

#include <iostream>
#include "Statistic.h"
#include "Item.h"

using namespace std;

ostream &operator<<(ostream &output, Statistic &st) {
    output << "Cheapest Item: " << st.cheap << endl;
    output << "Most expansive Item: " << st.exp << endl;
    output << "Average price: " << st.durchschnittspreis << endl;
    return output;
}
