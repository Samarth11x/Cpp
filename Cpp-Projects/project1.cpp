#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int num;
    int guess;
    int no_of_attempts = 0;

    srand(static_cast<unsigned int>(time(NULL))); // Seed the random number generator

    num = (rand() % 20) + 1; // Generate a random number between 1 and 20

    std::cout << "\n************* Number Guessing Game *************\n";

    do {
        std::cout << "\nEnter a number between (1-20): ";
        std::cin >> guess;
        no_of_attempts++;

        if (guess > num) {
            std::cout << "\nEnter a smaller number than #" << guess << '\n';
        } else if (guess < num) {
            std::cout << "\nEnter a greater number than #" << guess << '\n';
        } else {
            std::cout << "\nCongratulations!!\nYou have guessed the correct number in " 
                      << no_of_attempts << " attempts.\n";
        }

    } while (guess != num);

    std::cout << "\n************************************************\n";


    return 0;
}
