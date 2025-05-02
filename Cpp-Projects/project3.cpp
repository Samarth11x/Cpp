#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;

    cout << "Enter Number of Subject : ";
    cin >> n;

    vector<int> marks(n), gp(n);
    vector<float> credits(n); 
    int total_m = 0, total_gp = 0;
    float total_credits=0, wgp = 0, result = 0;

    cout<<"-- *Marks* -- \n";
    for(int i=0; i< n ; i++){
        cout<<"Enter Marks of subject "<< i+1 << ": ";
        cin >> marks[i];
        total_m += marks[i];
    }
    cout << "\nYour total marks : " << total_m << '\n';

    cout << "\n -- Gp*(GRADE POINTS)* -- \n91 -> 100 = 10\n81 -> 90 = 9\n71 -> 80 = 8\n61 -> 70 = 7\n";

    for(int i=0; i< n ; i++){
        if(marks [i] >= 91) gp[i] = 10;
        else if (marks [i] >= 81) gp[i] = 9;
        else if (marks [i] >= 71) gp[i] = 8;
        else if (marks [i] >= 61) gp[i] = 7;
        else if (marks [i] >= 51) gp[i] = 6;
        else if (marks [i] >= 41) gp[i] = 5;
        else if (marks [i] >= 31) gp[i] = 4;
        else if (marks [i] >= 21) gp[i] = 3;
        else gp[i] = 0;
        cout<<"\nGP of subject "<< i+1 << ": "<< gp[i];
        total_gp += gp[i];

    }
    cout << "\n\nYour total GP : " << total_gp << '\n';

    cout << "\n-- *Credits* --\n";
    for(int i=0; i< n ; i++){
        cout<<"Enter Credit of subject "<< i+1 << ": ";
        cin >> credits[i];
        total_credits += credits[i];
        wgp += credits[i] * gp[i];
    }
    cout << "\nTotal credits : " << total_credits << '\n';
    cout << "\nTotal waighted GP : " << wgp << '\n';

    result = wgp / total_credits;
    cout << "\nYour CGPA : "<< result;
    cout << "\nCongratulations !!\n";


    return 0;
}