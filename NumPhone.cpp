//
// Created by Demyan on 04.09.2021.
//

#include "NumPhone.h"

NumPhone::NumPhone(std::string str)
{
    setNum(str);
}

void NumPhone::setNum(std::string str) {
    if (str[0]== '8') {
        str[0] = 7;
        str.insert(str.begin(),'+');
    }
    for (int i = 2; i < 5; ++i) codeReg += str[i];
    for (int i = 5; i < 8; ++i) code_FFF += str[i];
    for (int i = 8; i < 10; ++i) code_SS+= str[i];
    for (int i = 10; i < 12; ++i) code_TT += str[i];
    nump += codeCantries + "(" + codeReg + ")" + code_FFF + sF + code_SS + sF + code_TT;
}
