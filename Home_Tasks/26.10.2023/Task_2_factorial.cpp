#include <iostream>

int main(){
    int number;
    int factorial = 1;
    std::cout << " Введите число: ";
    std::cin >> number;
    
    for (int i = 1; i <= number; i++){
        factorial *= i;
    }
    std::cout << "Факториал " << number << " равен " << factorial;
    return 0;
}
