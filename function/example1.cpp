#include <iostream>

//function decleraction;
void hello(std::string name, int age); //function with no return value;

int main(){

    // function - its a block of reusable code ;

    std::string name;
    int age;

    std::cout << "Enter your name : ";
    std::getline(std::cin, name);
    
    std::cout << "Enetr your age : ";
    std::cin >> age;

    hello(name, age); //function call;

    return 0;
}

//function defination;
void hello(std::string name, int age){
    std::cout << "Hello ! " << name << '\n' ;
    std::cout << "Your age is " << age;
}