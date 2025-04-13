#include <iostream>
using namespace std;

int main(){
    double temp;
    char unit;

    cout << "***********Temperature Conversion *********\n";

    cout << "F = Faranhite\n";
    cout << "C = Calcesious\n";

    cout << "What unit you would like to convert to : ";
    cin >> unit;

    if(unit == 'C' || 'c'){
        cout << "\nEnter Temperatiure in Farenhite : ";
        cin >> temp;

        temp = (1.8 + temp) - 32.0;
        cout << "\nTemperature : " << temp << "C\n";
    }
    else if(unit == 'F' || 'f'){
        cout << "\nEnter Temperatur in Celcius : ";
        cin >> temp;

        temp = (temp - 32.0) / 1.8;
        cout << "\nTemperature : " << temp << "F\n";
    }
    else{
        cout << "Please enter only in F or C \n";
    }

    cout << "\n**************Theank You******************";

    return 0;
}