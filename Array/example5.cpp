#include <iostream>
#include <numeric>

int main(){
    int marks[6];
    int result;
    float percentage;
    
    for(int i=0; i<6; i++){
        std::cout<< "Enter the marks of " << i+1 <<"st Subject : ";
        std::cin >> marks[i];
        result +=marks[i]; // easy and more efficient;
    }

    for(int i=0; i<6; i++){
        std::cout<< "The marks of " << i+1 <<"st Subject : " << marks[i] << '\n';
    }

    // result = std::accumulate(marks, marks + 6, 0);
    percentage = ((float)result / 600 )* 100;
    std::cout<< "Result : " << result <<'\n'; 
    std::cout<< "Result in percentage : " <<percentage << "%"; 

}