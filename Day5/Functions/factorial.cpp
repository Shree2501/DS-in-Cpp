#include <iostream>
using namespace std;
void factorial(int num){
    int fact=1;
    for(int i=num; i>0; i--){
        fact = fact * i;
    }
    cout<<"Factorial is: "<<fact;
}
int main(){
    factorial(4);
    return 0;
}