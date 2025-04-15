#include <iostream>

int main(){

    std::cout << "Even numbers: \n";
    for(int i=0; i<=10; i+=2){
        std::cout << i << '\n';
    }

    std::cout << "Odd numbers : \n";
    for(int j=1; j<=10; j+=2){
        std::cout << j << '\n';
    }

    return 0;
}