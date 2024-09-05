#include <iostream>

int main() {
    // This cont keyword specifies that a variable's value is constant 
    // tells the compiler to prevent anything from modifying it 
    // (read-only)
    const double PI = 3.14519;
    double radius = 10;
    double circumferance = 2 * PI * radius;

    std::cout << circumferance << "cm";

    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
   
    
    return 0;
}