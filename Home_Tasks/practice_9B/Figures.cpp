#include <iostream>  // для ввода/вывода
#include <cmath> //  для использования математических функций, таких как M_PI.
#include <stdexcept>  // для обработки исключений
#include <vector>
class Figure {
public:
    // Виртуальный метод для расчета площади
    virtual double square() const = 0;

    // Виртуальный деструктор
    virtual ~Figure() {}
};

class Rectangle : public Figure {
private:
    double length;
    double width;

public:
    Rectangle(double a, double b): length(a), width(b){}

    double square() const override{
        if (width < 0 || length < 0){
            throw 1;
        }
        else{
            if (width == 0 || length == 0){
                throw 2;
            }
        }
        return width * length;
    }
};

class Circle : public Figure {
private:
    double radius;
public:
    Circle(double r): radius(r){}

    double square() const override{
        if (radius < 0){
            throw 1;
        }
        else if (radius == 0) {
            throw 2;
        }
        return radius * M_PI;
    }
};

int main(){
    std::vector<Figure*> shapes;

    shapes.push_back(new Rectangle(4, 6));
    shapes.push_back(new Rectangle(0, 6));
    shapes.push_back(new Rectangle(-1, 6));
    shapes.push_back(new Circle(5));
    shapes.push_back(new Circle(0));
    shapes.push_back(new Circle(-5));

    for (const auto& shape: shapes) {
        try{
            std::cout << "Area " << shape -> square() << std::endl;
        } catch (int exeption){
            if (exeption == 1){
            std::cout << "Exeption 1: Фигура с отрицательными параметрами" << std::endl;
            } else if (exeption == 2){
                std::cout << "Exeption 2: Фигура с нулевой площадью" << std::endl;
            }
        }
    }
    return 0;
}
