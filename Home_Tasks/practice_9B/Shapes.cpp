#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Shape {
public:

    double square(){
        cout << 0 << endl;
    }


};

class Rectangle: public Shape{
private:
    double length;
    double width;
public:
    Rectangle(const double& length, const double& width): length(length), width(width) {}
    void square(){
        cout << length * width << endl;
    }
};

class Circle : public Shape{
private:
    double radius;
public:
    Circle(const double& radius) : radius(radius){}
    void square(){
        cout << M_PI * radius << endl;
    }

};

int main() {
    Rectangle myrec(10, 5);
    myrec.square();
    Circle mycircle(10);
    mycircle.square();
}
