//
// Created by max on 29.12.21.
//

#ifndef OPERATING_OVERLOADING_EANCODE_H
#define OPERATING_OVERLOADING_EANCODE_H

#include <iostream>
#include <string>

using namespace std;


class EanCode {

    string code;

public:

    EanCode(string &code);

    void check();

    void printEan();

    string getEan() const;

    friend ostream &operator<<(ostream &output, EanCode &c);

};


#endif //OPERATING_OVERLOADING_EANCODE_H
