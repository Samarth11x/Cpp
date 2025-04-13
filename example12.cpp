#include <iostream>
using namespace std;

int main(){
    int marks;

    cout << "Enter your marks : ";
    cin >> marks;

    if(marks >= 90){
        cout << "Congrajulations !! \nYou got A+ grade";
    }
    else if(marks >= 80){
        cout << "Congrajulation !! \nYou got A grade";
    }
    else if(marks >= 70){
        cout << "Congrajulation !! \nYou got B+ grade";
    }
    else if(marks >= 60){
        cout << "Congrajulation !! \nYou got B grade";
    }

    marks >= 35 ? cout << "\nCongrajulation !! \nYou Passed" : cout << "Sorry :( \nBetter Luck next time";

    return 0;
}