#include <iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter a no. : ";
    cin>>n;
    
    bool prime = true;
    if(n<2){
        prime = false;
    }
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            prime = false;
        }
    }
    if(prime == true){
        cout<<"prime";
    }
    else{
        cout<<"Not prime";
    }
    return 0;
}