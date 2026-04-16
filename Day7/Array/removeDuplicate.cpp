#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,1,2};
    int size = 5;
    for(int i = 0; i < size; i++){
        bool isUnique = true;
        for(int j = 0; j < i; j++){
            if(arr[j] == arr[i]){
                isUnique = false;
                break;
            }    
        }
        if(isUnique)
            cout << arr[i] << " ";
    }
    return 0;
}