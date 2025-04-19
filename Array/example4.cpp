#include <iostream>

void print_odd(int num[], int n);

int main() {
    int num[10]; // Declare an array with size 10

    std::cout << "Enter 10 integers:\n";
    for (int i = 0; i < 10; i++) {
        std::cin >> num[i];
    }

    print_odd(num, 10);

    return 0;
}

void print_odd(int num[], int n) {
    std::cout << "Elements at odd indices:\n";
    for (int i = 1; i < n; i += 2) {
        std::cout << num[i] << '\n';
    }
}