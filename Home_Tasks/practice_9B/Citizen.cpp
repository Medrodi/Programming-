#include <iostream>
#include <stdexcept>  // для обработки исключений
#include <vector>
using namespace std;


class House {
private:
    int numRooms;
    string address;

public:
    House(int numRooms, const string& address) : numRooms(numRooms), address(address) {}

    void getInfo() const {
        cout << "Дом с " << numRooms << " комнатами по адресу: " << address << endl;
    }
};

class Person{
private:
    int age;
    string name;
public:
    Person(const string& name, int age): name(name), age(age) {}

    void getInfo() const {
        cout << "Человек по имени " << name << " возрастом " << age << endl;
    }
};

class Citizen: public Person {
private:
    House house;
public:
    Citizen(const string& name, const int age, const House& house): Person(name, age), house(house) {}

    void linkWithHouse(const House& house) {
        this->house = house;
    }

    void getInfo() const {
        Person::getInfo();
        house.getInfo();
    }
};

int main() {
    House house(4, "st. Serpuhovskaya, 10");
    Citizen myCitizen("Jack", 39, house);

    myCitizen.getInfo();
}
