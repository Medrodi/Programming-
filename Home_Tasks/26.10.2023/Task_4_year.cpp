#include <iostream>

int main(){
    int number;
    std::cout << " Введите число: ";
    std::cin >> number;
    
    if ((number % 4 == 0 && number % 100 != 0) || (number % 400 == 0)){
        std::cout << number << " - Високосный год!" ;
        
    } else {
        std::cout << number << " - Невисокосный год";
    }
    return 0;
}
