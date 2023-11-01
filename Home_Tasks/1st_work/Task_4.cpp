#include <iostream>

using namespace std;

int main()
{   double x;
    std::cout << "Введите температуру в цельсиях" << std::endl;
    std::cin >> x;
    std::cout << x * 9 / 5 +  32 << std::endl;
    return 0;
}
