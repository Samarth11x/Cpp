#include <iostream>
using namespace std;

int main(){
    char op;
    double num1, num2;
    double result;

    cout << "**********CALCULATOR**********\n";

    cout << "Enter your choice (+ - * /) : ";
    cin >> op;

    cout << "Enter #1 : ";
    cin >> num1;

    cout << "Enter #2 : ";
    cin >> num2;

    switch(op){
        case '+' :
        result = num1 + num2;
        cout << result;
        break;

        case '-' :
        result = num1 - num2;
        cout << result;
        break;

        case '*' :
        result = num1 * num2;
        cout << result;
        break;

        case '/' :
        result = num1 / num2;
        cout << result;
        break;

        default :
        cout << "Enter a valid choice";
        break;
    }

    cout << "\n**********THANK YOU!!**********\n";

    return 0;

}