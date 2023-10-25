#include <iostream>

int main(){
    std::string str;
    std::string obratna;
    int delitel = 0;
    std::cout << " Введите строку: ";
    std::cin >> str;
    
    for (int i = str.length(); i >= 0; i--){
        obratna += str[i];
    }
    std::cout << obratna;
    return 0;
}
