
#include "Phone.h"

int Phone::setCommand(const std::string& s) {

    if (s == "add") {
        command = ADD;
    } else if (s == "sms") {
        command = SMS;
    } else if (s == "call") {
        command = CALL;
    } else if (s == "save") {
        command = SAVE;
    } else if (s == "load") {
        command = LOAD;
    } else if (s == "del") {
        command = DEL;
    } else if (s == "exit") {
        command = EXIT;
        return -1;
    } else {
        std::cerr << "Неизвестная команда" << std::endl;
    }
}

void Phone::addNote() {

}

Phone::Phone() {
    notePhone noteBook;
    command = LOAD;
}
