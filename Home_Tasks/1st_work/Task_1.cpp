#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x;
    std::cout << "Number" << std::endl;
    std:: cin >> x;
    if (x >= 0){
        double squreRoot = sqrt(x);
        std::cout << "Koren  " << squreRoot << std::endl;
    }else{
        std::cerr << "Error 1" << std::endl;
        return 1;
    }
    return 0;
}
