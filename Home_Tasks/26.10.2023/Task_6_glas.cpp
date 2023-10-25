#include <iostream>


int main() {
    std::string str;

    
    std::cout << "Введите строку: ";
    std::cin >> str;

    int k = 0;

    
    for (char c : str) {
        if (c == 'ё' || c == 'у' || c == 'е' || c == 'ы' || c == 'а' ||
            c == 'о' || c == 'э' || c == 'я' || c == 'и' || c == 'ю') {
            k++;
        }
    }

    std::cout << "Количество гласных в строке: " << k << std::endl;

    return 0;
}
