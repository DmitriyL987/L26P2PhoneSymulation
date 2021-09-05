#pragma once
#include <string>
#include <vector>

class PhoneContact {
    std::string fullname = "";
    std::vector<std::string> numbersPhone;
public:
    PhoneContact() = default;
    PhoneContact(std::string name , std::string num){
        fullname = name;
        numbersPhone.push_back(num);
    }

};
