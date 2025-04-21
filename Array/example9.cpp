#include <iostream>

void storetable(int table[][10], int n, int m, int num);

int main(){
    int table[2][10];

    storetable(table, 0, 10, 2);
    storetable(table, 1, 10, 3);

    for(int i=0; i<10; i++){
        std::cout<<table[0][i] << '\t';
    }
    std::cout << '\n';
    for(int i=0; i<10; i++){
        std::cout<<table[1][i] << '\t';
    }

}

void storetable(int table[][10], int n, int m, int num){
    for(int i=0; i<m; i++){
        table[n][i]=num*(i+1);
    }
    return;
}
