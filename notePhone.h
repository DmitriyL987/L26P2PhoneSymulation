#pragma once
#include <iostream>
#include <string>
#include <map>

#include "PhoneContact.h"
#include "NumPhone.h"

class notePhone {
    std::map <std::string, uint16_t> firstName;
    std::map <std::string, uint16_t> surName;
    std::map <std::string, uint16_t> patronymic;
    std::map <std::string, uint16_t> phoneNumber;
    std::map <uint16_t, PhoneContact> contact;
public:
    notePhone();
    notePhone(std::string);

    static bool numOrName(std::string s);
    std::string inputNumber();
    bool newContact();
    bool check_modeName(std::string str, std::map<std::string,uint16_t> &book) ;
    bool findContact(notePhone, std::string&, uint16_t &id);

};
