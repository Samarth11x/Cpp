#include <iostream>

int main(){
    int number;

    do{
        std::cout << "Please enter a positive # : ";
        std::cin >> number;
    }while(number < 0);

    std::cout << "The # is : " << number;

    return 0;
}