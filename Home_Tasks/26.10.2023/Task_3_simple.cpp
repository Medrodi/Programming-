#include <iostream>

int main(){
    int number;
    int delitel = 0;
    std::cout << " Введите число: ";
    std::cin >> number;
    
    for (int i = 1; i <= number; i++){
        if (number % i == 0) {
            delitel += 1;
        }
        
        
    }
    if (delitel = 2){
        std::cout << "Число " << number << " простое";
        
    }else {
        std::cout << "Число" << number << " не простое";
    }
    return 0;
}
