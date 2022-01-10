//
// Created by max on 29.12.21.
//
#include <iostream>
#include "EanCode.h"


//    constructor

EanCode::EanCode(string &code) : code(code) {}


//    operator overload

ostream &operator<<(ostream &output, EanCode &c) {
    output << c.code;
    return output;
}

//    setter

void EanCode::setEan(string &ean)  {
    this->code = ean;
}

//getter

string EanCode::getEan() const {
    return this->code;
}

//    other methods

void EanCode::check() {
    if (this->code.length() == 13)
        cout << "Correct\n";
    else {
        if (this->code.length() > 13)
            cout << "Too long\n" << "You have " << this->code.length() << " characters\n";
        else
            cout << "Too short\n" << "You have " << this->code.length() << " characters\n";
    }
}


