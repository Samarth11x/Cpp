#include <iostream>

int main(){
    std::string name;

    while(name.empty()){
        std::cout<< "Enter your Name : ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello ! " << name << std::endl;

    return 0;
} 