#include <iostream>
#include <stdexcept>  // для обработки исключений
#include <vector>
using namespace std;

class Product {
protected:
    double price;
    double weight;
public:
    Product(const double& price, const double& weight): price(price), weight(weight){
        if (price <= 0 || weight <= 0) {
            throw std::invalid_argument("Цена и вес должны быть положительными значениями.");
            }
    }
    void getTotalPrice() const {
        cout << price * weight << endl;
    }
};

class Apple : public Product {
private:
    string variety;

public:
    Apple(const double& price, const double& weight, const string variety): Product(price, weight), variety(variety) {}

    virtual void getVariety() {
        cout << "Сорт яблока: " << variety << endl;
    }
    virtual void getTotalPrice(){
        cout << price * weight << endl;
    }
};

class Orange : public Product {
private:
    string origin;
public:
    Orange(const double& price, const double& weight, const string origin): Product(price, weight), origin(origin) {}

    virtual void getOrigin() {
        cout << "Страна происхождения: " << origin << endl;
    }
    virtual void getTotalPrice() {
        cout << price * weight << endl;
    }
};

int main()
{
    try {
        Apple myApple(-5, 10, "golden");
        Orange myOrange(10, 0, "Brazil");
        Apple aplle_1(5, 10, "Red dragon");
        Orange orange_1(10, 6, "Spain");


    } catch (const invalid_argument& e) {
        cerr << "Ошибка в исходных данных" << e.what() << endl;
    }

    try {

        Orange myOrange(10, 0, "Brazil");

    } catch (const invalid_argument& e) {
        cerr << "Ошибка в исходных данных" << e.what() << endl;
    }
    try {
        Apple apple_1(5, 10, "Red dragon");
        apple_1.getTotalPrice();
        apple_1.getVariety();


    } catch (const invalid_argument& e) {
        cerr << "Ошибка в исходных данных" << e.what() << endl;
    }
    try {
        Orange orange_1(10, 6, "Spain");
        orange_1.getTotalPrice();
        orange_1.getOrigin();


    } catch (const invalid_argument& e) {
        cerr << "Ошибка в исходных данных" << e.what() << endl;
    }
    return 0;
}
