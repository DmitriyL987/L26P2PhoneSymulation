//
// Created by Demyan on 05.09.2021.
//

#include "PhoneContact.h"
PhoneContact::PhoneContact(std::string name , std::string num){
    fullname = name;
    numbersPhone.push_back(num);
    numsP_ptr = &numbersPhone;

}

void PhoneContact::setNumC(NumPhone *nP, const std::string &str) {
    nP->setNum(str);
    numbersPhone.push_back( nP->getNum());
}

auto PhoneContact::getNumC() {
    return numsP_ptr;
}

void PhoneContact::setNameC(const std::string &name) {
    fullname = name;
}

std::string PhoneContact::getNameC() {
    return fullname;
}



