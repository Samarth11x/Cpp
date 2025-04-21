#include<iostream>

void reverse(int arr[], int n);
void printarr(int arr[], int n);

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

    reverse(arr, 8);
    printarr(arr, 8);

    return 0;

}

void reverse(int arr[], int n){
    int first;
    int second;

    for(int i=0; i<=n/2; i++){
        first = arr[i];
        second = arr[n-i-1];
        arr[i] = second;
        arr[n-i-1] = first;
    }
    return;

}

void printarr(int arr[], int n){
    for(int i=0; i<=n ; i++){
        std::cout << arr[i] << '\t';
    }
    return;
}