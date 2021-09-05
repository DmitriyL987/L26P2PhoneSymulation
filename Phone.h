#pragma once
#include <string>
#include <map>
#include "notePhone.h"


class Phone {
    enum Command
    {
        SMS  = 1,
        CALL = 2,
        ADD  = 4,
        DEL  = 8,
        SAVE = 16,
        LOAD = 32,
        EXIT = 128,
    };
    Command command;


public:
    Phone();
    int setCommand(const std::string&);
    int getCommand(){return command;}
    void selected (Command);
    void addNote();

    ~Phone() = default;
};