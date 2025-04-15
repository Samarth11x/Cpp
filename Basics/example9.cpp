#include <iostream>
using namespace std;

int main(){
    string name;
    int age;

    cout << "Enter your age : ";
    cin >> age; // to get single word input;

    cout << "Enter your full name : ";
    getline(cin >> ws, name); // to get multi word string;

    cout << "Hii!! " << name << '\n';
    cout << "Your age is "<< age;

    return 0;
}