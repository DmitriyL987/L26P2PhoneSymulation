

#include "notePhone.h"

notePhone::notePhone(std::string str) {

    if (numOrName(str)) {
        NumPhone numPhone(str);
        str = numPhone.getNum();
        std::string answer;
        if (phoneNumber.find(str) == phoneNumber.end() && (firstName.find(str) == phoneNumber.end())){
            std::cout << str << " - добавить новый контакт?(да/нет)" << std::endl;
            std::cin >> answer;
            if (answer =="да") newContact();
        } else if (phoneNumber.find(str) == phoneNumber.end() && (firstName.find(str) != phoneNumber.end())){
            std::cout << str << " - добавить контакт к существующему? (да/нет)" << std::endl;
            std::cin >> answer;

        }
        //system("clear");
    }
}

bool notePhone::numOrName(std::string s){
    size_t len = s.size();
    bool itsNum;
    for (int i = 0; i < len; ++i)
    {
        if ((s[i] > '0' && s[i] < '9') || s[0] == '+') itsNum = true;
        else { itsNum = false; break; }
    }
    return itsNum;
}

bool notePhone::newContact() {
    std::cout << "Имя :" << std::endl;
    std::string name;
    getline(std::cin, name);
    size_t countContacts = contact.size();

    if (size_t pos1 = name.find(' ') != name.npos){
        std::string subName = name.substr(0,pos1);
        if (check_modeName(subName, firstName)) {
        } else return false;
        if (size_t pos2 = name.find(' ', pos1+1) != name.npos) {
            subName = name.substr(pos1+1,(pos2 - (pos1 +1)));
            if (check_modeName(subName, surName)) {
                subName = name.substr(pos2 + 1, (name.size() - (pos2 + 1)));
                check_modeName(subName, patronymic);
            }
        } else {
            if (check_modeName(name, surName))
                patronymic.insert(std::make_pair("", countContacts));
        }

    } else {
        if(check_modeName(name, firstName)) {
            surName.insert(std::make_pair("", countContacts));
            patronymic.insert(std::make_pair("", countContacts));
        } else std::cerr << "Ошибка! Имя не может быть пустым." << std::endl;
    }

}

bool notePhone::check_modeName(std::string str, std::map<std::string, uint16_t> &book) {
    if(str == "") return false;
    bool a = true;
    uint16_t s = 1;
    size_t countContacts = contact.size();
    while(a)
    {
        if (book.find(str) == book.end()){
            a = false;
            book.insert(std::make_pair(str, countContacts));
        } else {
            str += "_";
            str += ('0' + s);
        }
        s++;
    }
    return true;
}

bool notePhone::findContact(uint16_t &uid, std::string &str) {
    if(numOrName(str)) {
        NumPhone number(str);
        str = number.getNum();
        auto it = phoneNumber.find(str);
        if (it != phoneNumber.end()) {
            uid = it->second;
            return true;
        } return false;
    } else {
        auto it = firstName.find(str);
        if (it != firstName.end()){
            uid = it->second;
            return true;
        } else if ((it = surName.find(str)) != surName.end()){
            uid = it->second;
            return true;
        } else if ((it = patronymic.find(str)) != patronymic.end()){
            uid = it->second;
            return true;
        } else return false;
    }
}