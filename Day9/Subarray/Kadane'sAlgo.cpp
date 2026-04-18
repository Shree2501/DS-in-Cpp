#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[5] = {3,-4,2,5,-2};
    int n = size(arr);
    int currSum = 0;
    int maxSum = 0;
    for(int i = 0; i < n; i++){
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout << maxSum;
}