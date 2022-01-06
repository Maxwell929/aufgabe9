//
// Created by max on 29.12.21.
//

#include "EanCode.h"


EanCode::EanCode(string &code) : code(code) {}

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

void EanCode::printEan() {
    cout << this->code << endl;
}

ostream &operator<<(ostream &output, EanCode &c) {
    output << c.code;
}

string EanCode::getEan() const {
    return this->code;
};
