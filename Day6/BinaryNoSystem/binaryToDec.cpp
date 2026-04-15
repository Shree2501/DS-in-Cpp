#include <iostream>
using namespace std;
int binaryToDec(int binaryNum){
    int ans=0,pow=1,sum;
    while(binaryNum > 0){
        int rem = binaryNum % 10;
        ans += ((pow)*rem);
        pow *= 2;
        binaryNum /= 10;
    }
    return ans;
}

int main(){
    cout<<binaryToDec(101);
    return 0;
}