#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int smallest = i;
        for(int j = i+1; j < n; j++){
            if(arr[smallest] > arr[j]){
                smallest=j;
            }
        }
        swap(arr[i],arr[smallest]);  
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i];
    }
}

int main(){
    int arr[5] = {8,5,3,7,9};
    int n = 5;
    SelectionSort(arr,n);
    printArray(arr,n);
    return 0;
}