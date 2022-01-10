//
// Created by maximilian on 10.01.22.
//

#ifndef OPERATING_OVERLOADING_STATISTIC_H
#define OPERATING_OVERLOADING_STATISTIC_H

#include <iostream>
#include "Item.h"

struct Statistic {

    Item cheap;
    Item exp;
    double durchschnittspreis{0};

    friend ostream &operator<<(ostream &output, Statistic &st);

};


#endif //OPERATING_OVERLOADING_STATISTIC_H
