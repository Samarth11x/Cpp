#include <iostream>
#include <string>
using namespace std;

class account{
private:
    string password;
    double balance; //Data Hiding

public:
    double Acc_no;
    string Acc_Holder;

    void setpass(string pass){
        password = "******";
    }

    void set_balance(double b){
        balance = b;
    }

    double show_balance(){
        return balance;
    }

};  //Encapsulation = Data + Function ;

int main(){
    account a1;

    a1.Acc_Holder = "Sam";
    a1.Acc_no = 1111;
    a1.set_balance(1000);
    a1.show_balance();

    cout<< "ACC Holder : "<< a1.Acc_Holder << endl;
    cout<< "ACC Num : "<< a1.Acc_no << endl;
    cout<< "Balance : "<< a1.show_balance() << endl;

}