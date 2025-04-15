#include <iostream>

int main(){
    int a;
    int b;
    int c;

    std::cout << "Enter The value of a : ";
    std::cin >> a;

    std::cout << "Enter The value of b : ";
    std::cin >> b;

    std::cout << "Enter The value of c : ";
    std::cin >> c;

    if(a > b && a > c){
        std::cout << a << " is greater than "<< b << " and " << c ;
    }
    else if(b > a && b > c){
        std::cout << b << " is greater than "<< a << " and " << c ;
    }
    else if(c > a && c > b){
        std::cout << c << " is greater than "<< a << " and " << b ;
    }
    else{
        std::cout << "All are equal! ";
    }

    return 0;

}