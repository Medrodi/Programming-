#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Dog {
private:
    string name;
    int age;
public:
    Dog(const string& name, int age) : name(name), age(age) {}

    void getInfo(){
        cout << "Собака по имени  " << name << "возрастом " << age << endl;
    }
};

int main() {
    Dog myDog("Jack", 18);
    myDog.getInfo();
}
