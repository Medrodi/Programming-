#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class TransportVehicle {
private:
    double speed;
public:
    TransportVehicle(double speed) : speed(speed) {}

    void getInfo() const {
        cout << "Транспортное средство типа с макс скоростью " << speed << " км/ч" << endl;
    }
};

class Car : public TransportVehicle {
private:
    string brand;
    string model;
public:
    Car(const double speed, const string& brand, const string& model) : TransportVehicle(speed), brand(brand), model(model) {}
};

class Tractor:public TransportVehicle{
private:
    string brand;
    string model;
public:
    Tractor(const double speed,  const string& brand, const string& model): TransportVehicle(speed), brand(brand), model(model) {}

    virtual void getInfo(){
        cout <<"Трактор бренда " << brand << "модели " << model << "с макс скоростью" << endl;
    }
};


int main() {
    Tractor myTractor(70, "Dragon", "m1");
    myTractor.getInfo();
}
