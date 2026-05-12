#include <iostream>
using namespace std;

int main(){
    int n = 2345;
    int count = 0;
    int sum = 0;
    while(n!=0){
        int dig = n%10;
        sum += dig;
        n=n/10;
    }
    cout << "Sum : " << sum;
}