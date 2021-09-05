
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
        if(notePhone::numOrName(s)) {
            NumPhone number(s);
            bool validContact;
            std::string num = number.getNum();
            std::cout << "Введён номер телефона - " << num << ", что вы хотите сделать:\n" ;
            std::cout << "\tпозвонить - \'call\'\n" ;
            std::cout << "\tотправить сообщение - \'sms\'\n";
            std::cout << "\tдобавить в контакты - \'add\'\n" << std::endl;


        }
        std::cerr << "Неизвестная команда" << std::endl;
    }
}

void Phone::addNote() {

}

Phone::Phone() {
    notePhone noteBook;
    command = LOAD;
}


