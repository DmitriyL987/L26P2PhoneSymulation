#include <iostream>
#include <sstream>
#include <iomanip>
#include <map>
#include <vector>

#include "Phone.h"


int main() {

    Phone phone;
    std::string tmp;
    std::cout << "Допустимые команды:\n" ;
    std::cout << "\"add\" - добавить контакт;\n" ;
    std::cout << "\"sms\" - отправить сообщение;\n" ;
    std::cout << "\"call\" - позвонить;\n" ;
    std::cout << "\"save\" - сохранить в файл\n" ;
    std::cout << "\"load\" - загрузить из файла\n" ;
    std::cout << "\"del\" - удалить контакт\n" ;
    std::cout << "\"exit\" - выход из программы\n" ;

    int res;
    do{
        std::cout << "Ожидание команды\n> " << std::endl;
        std::cin >> tmp ;
        res = phone.setCommand(tmp);
        if(res == -1) break;
    }while (true);


    std::cout << "Введите имя или номер телефона." << std::endl;
    std::cin >> tmp;
    NumPhone numPhone(tmp);
    std::cout << numPhone.getNum();

}