#include <iostream>
using namespace std;

int main(){
    int age;

    cout << "Enetr your Age : ";
    cin >> age;

    if(age >= 18){
        cout << "Congrajulation! \nYou are eligable for Voting";
    }
    else{
        cout << "Sorry :( \nYou are not eligable for voting";
    }
    return 0;
}