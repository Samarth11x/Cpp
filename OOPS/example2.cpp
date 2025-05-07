#include <iostream>
#include <string>
using namespace std;

class teacher{
private:
    double salary;

public:

    string name;
    string dept;
    string subject;
    
    //Private Memner setter function;
    void setsalary(double s){
        salary = s;
    }

        //Private Memner getter function;
    double getsalary(){
        return salary;
    }

};

int main(){
    teacher t1;

    t1.name = "Devyani S";
    t1.subject = "Science";
    t1.dept = "Dept. of Science";
    t1.setsalary(30000);

    cout << t1.name << endl;
    cout << t1.dept << endl;
    cout << t1.subject << endl;
    cout << t1.getsalary() << endl;

    return 0;
}