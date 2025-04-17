#include <iostream>

int main(){
    double price[3];

    std::cout<< "Enter 1.Price :";
    std::cin >> price[0];

    std::cout<< "Enter 2.Price :";
    std::cin >> price[1];

    std::cout<< "Enter 3.Price :";
    std::cin >> price[2];
    
    price[0] += (price[0]*0.18);
    price[1] += (price[1]*0.18);
    price[2] += (price[2]*0.18);
    
    
    std::cout << "Final Price 1= "<< price[0] << '\n';
    std::cout << "Final Price 2= "<< price[1] << '\n';
    std::cout << "Final Price 3= "<< price[2] << '\n';

    std::cout<< "Grand Total = " << price[0]+price[1]+price[2];


    return 0;
}