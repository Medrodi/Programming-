#include <iostream>

int main() {
    int number;

    // Запрос у пользователя ввести число для таблицы умножения
    std::cout << "Введите число для таблицы умножения: ";
    std::cin >> number;

    // Вывод заголовка таблицы
    std::cout << "Таблица умножения для " << number << ":\n";

    // Вывод таблицы умножения
    for (int i = 1; i <= 10; i++) {
        std::cout << number << " * " << i << " = " << (number * i) << std::endl;
    }

    return 0;
}
