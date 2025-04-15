#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a;
    double b;
    double c;

    cout << "Enter the height of the Triangle : ";
    cin >> a;

    cout << "Enter the base of the Triangle : ";
    cin >> b;

    c = sqrt(pow(a,2) + pow(b,2));

    cout << "Hypotenious of the right angle triangle : " << c;

    return 0;


}