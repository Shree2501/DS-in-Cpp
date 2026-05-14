#include <iostream>
#include <algorithm>
using namespace std;

int DiagonalSum(int arr[][3], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i][i];
        if(i != n-1-i){
            sum += arr[i][n-1-i];
        }
    }
    return sum;
}

int main(){
    int matrix[3][3] = {{1,2,3},{3,4,5},{6,7,8}};
    cout << DiagonalSum(matrix,3);
    return 0;
}