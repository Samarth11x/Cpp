#include <iostream>

int main(){
    int rows;
    int column;
    char ch;

    std::cout << "Enter the number of Rows : ";
    std::cin >> rows;

    std::cout << "Enetr the number of columns : ";
    std::cin >> column;

    std::cout << "Enter the symbol : ";
    std::cin >> ch;

    for(int i = 0; i<= rows; i++){
        for(int j=0; j<=column; j++){
            std::cout << ch;
        }
        std::cout << '\n';
    }

    return 0;

}