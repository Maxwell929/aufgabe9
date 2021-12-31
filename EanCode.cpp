//
// Created by max on 29.12.21.
//

#include "EanCode.h"


void EanCode::check() {
    if (this->code.length() == 13)
        cout << "Correct\n";
    else
    { cout << "Code hat keine 13 Stellen\n"; }
}

void EanCode::printEan() {
    cout << this->code<< endl;
}


EanCode::EanCode(string code) : code(code) {}