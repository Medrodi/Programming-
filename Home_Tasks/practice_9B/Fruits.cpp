#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Fruit {
public:
    virtual std::string getVitamins() const {
        return "неизвестно";
    }
};

class Apple : public Fruit {
public:
    void getVitamins() {
        cout << "Витамин C" << endl;
    }
};

class Orange : public Fruit {
public:
    void getVitamins() {
        cout << "Витамин C и A" << endl;
    }
};

int main() {
    Apple myapple;
    myapple.getVitamins();
    Orange myorange;
    myapple.getVitamins();

}
