#pragma once
#include <string>

 class NumPhone {
    std::string nump;
    std::string codeCantries = "+7";
    std::string codeReg;
    std::string code_FFF;
    std::string code_SS;
    std::string code_TT;
    std::string sF = "-";

public:
    NumPhone(std::string);
    std::string getNum(){return nump;}
    void setNum(std::string);
    ~NumPhone() = default;
};