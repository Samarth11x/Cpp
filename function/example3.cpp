#include<iostream>

double volume_cube(double side);

int main(){
    double side;

    std::cout << "Enetr the side of a cube : ";
    std::cin >> side;

    std::cout << "Volume of a cube : " << volume_cube(side);

    return 0;
}

double volume_cube(double side){
    return side*side*side;
}