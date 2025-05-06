#include <iostream>
using namespace std;

class hospital{
    public:
    string name;
    string address;
    int age;
    long ph_no;

    void getData(){
        cout<<"Enter Patient Name : ";
        cin>> name;

        cout<<"Enter Patient Address : ";
        cin >> address;

        cout<<"Enter Patient age : ";
        cin>> age;

        cout<< "Enter Patient Ph_No. : ";
        cin >> ph_no;
    }

    void showData(){
        cout<<"\n----*Data of Patient*-----\n";
        cout<<"\nName of the patient : "<< name << '\n';
        cout<<"\nAddress of the patient : "<<address << '\n';
        cout<<"\nAge of patient : "<<age << '\n';
        cout<<"\nContact No. : "<<ph_no <<'\n';
        cout<<"\n\n*****************************\n";
    }

};

int main(){
    hospital p1;

    p1.getData();
    p1.showData();

    return 0;


}