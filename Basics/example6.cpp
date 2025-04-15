#include <iostream>
using namespace std;

int main ()
{
    float pi = 3.14;
    float radius;

    cout << "Enter the radius of a circle : ";
    cin >> radius;

    cout << "Area of a circle is : " << pi*radius*radius << endl;
    return 0;
}