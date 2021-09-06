#pragma once
#include <string>
#include <vector>

#include "NumPhone.h"

class PhoneContact {
    std::string fullname = "";
    std::vector<std::string> numbersPhone;
    std::vector<std::string> *numsP_ptr;
public:
    PhoneContact() = default;
    PhoneContact(std::string, std::string );

    bool findNumber(const std::string&);
    void setNumC(NumPhone*, const std::string&);
    auto getNumC();
    void setNameC(const std::string&);
    std::string getNameC();

    ~PhoneContact()=default;
};
