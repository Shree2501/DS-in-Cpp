#include <iostream>
using namespace std;
void SumOfDigit(int num){
    int rem=0,sum=0;
    while(num!=0){
        rem = num%10;
        sum = sum + rem;
        num=num/10;
    }
    cout<<"Sum is: "<< sum;
}
int main(){
    SumOfDigit(435);
    return 0;
}