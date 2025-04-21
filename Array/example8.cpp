#include <iostream>

int main(){
    int n;

    std::cout<< "Enter the value of n : ";
    std::cin >> n;

    int fib[n];

    fib[0]=0;
    fib[1]=1;

    std::cout<< fib[0] << '\t' << fib[1] << '\t';

    for(int i=2; i<=n; i++){
        fib[i] = fib[i-1]+fib[i-2];
        std::cout<<fib[i] << '\t';
    }

    return 0;

}