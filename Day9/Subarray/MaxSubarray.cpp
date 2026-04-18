#include <iostream>
#include <vector>
using namespace std;

int maxSum(int arr[], int n){
    int maxSum = 0;
    for(int i = 0; i < n; i++){
        int currSum = 0;
        for(int j = i; j < n; j++){
            currSum += arr[j];
            maxSum = max(currSum, maxSum);
        }
    }
    return maxSum;
}

int main(){
    int arr[5] = {3,-4,2,5,-2};
    int n = size(arr);
    cout << maxSum(arr,n);
}