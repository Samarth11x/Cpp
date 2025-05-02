#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL));
    int random = (rand() % 5) + 1;

    switch (random) {
        case 1:
            std::cout << "You won 1 crore\n";
            break;
        case 2:
            std::cout << "You won a car\n";
            break;
        case 3:
            std::cout << "You won 10 lakhs\n";
            break;
        case 4:
            std::cout << "You won 1 lakh\n";
            break;
        case 5:
            std::cout << "Congratulations!!\nYou won life :)\n";
            break;
    }

    return 0;
}