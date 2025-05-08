#include <iostream>
#include <string>
using namespace std;

class constructor{
public:
    string name;
    string branch;
    int roll_no;
    
    // constructor(){
    //     branch = "BECS"; 
    // }
    //non-parameterised constructor;

    constructor(string n, int r_n, string b){
        name = n;
        roll_no = r_n;
        branch = b;
    }

    void get_info(){
        cout << "Name : "<< name << endl;
        cout << "Roll No. : "<< roll_no << endl;
        cout << "Branch : " << branch << endl;
    }

};

int main(){
    constructor s1("Sam", 140, "BECS");
    s1.get_info();

    return 0;
}