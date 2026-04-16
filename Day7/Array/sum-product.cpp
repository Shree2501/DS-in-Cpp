#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int sum = 0;
    int pdt = 1;
    
    for(int i = 0; i < size; i++){
        sum += arr[i];
        pdt *= arr[i];
    }
    cout<<"Sum is: "<<sum<<endl;
    cout<<"Product is: "<<pdt;
    return 0;
}