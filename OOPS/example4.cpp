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

    constructor(string name, int roll_no, string branch){
        this->name = name;
        this->roll_no = roll_no;
        this->branch = branch;
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