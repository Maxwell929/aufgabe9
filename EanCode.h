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

//    constructor

    EanCode(string &code);

//getter

    string getEan() const;

//    setter

    void setEan(string &ean);

//    other methods

    void check();

//    operator overload

    friend ostream &operator<<(ostream &output, EanCode &c);

};


#endif //OPERATING_OVERLOADING_EANCODE_H
