#include <iostream>

int main(){
    int number;
    std::cout << " Введите число: ";
    std::cin >> number;
    
    for (int i = 1; i <= 10; i++){
        std::cout << i << " * " << number << '=' << i * number << std::endl;
        
    }
    return 0;
}
