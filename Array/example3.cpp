#include <iostream>

int main(){
    int aadhar[12];

    for(int i=0; i<=12; i++){
        std::cout << "Enter Your aadhar no. " << i << "-digit : ";
        std::cin >> aadhar[i];
    }

    std::cout << "Pleade Verify your aadhar no : "; 

    for(int i=0; i<=12; i++){
        std::cout << aadhar[i];
    }

    return 0;
}