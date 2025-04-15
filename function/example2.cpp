#include <iostream>

// Function prototype
double area_square(double side);

int main() {
    // Return keyword - which returns the value from another function to the main function
    double side = 5.0;

    std::cout << "Area of square is " << area_square(side) << " cm^3";

    return 0;
}

// Function definition
double area_square(double side) {
    return side * side;
}
