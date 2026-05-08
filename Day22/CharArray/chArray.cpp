#include <iostream>
using namespace std;

int main(){
    char arr[6];
    int len = 0;
    cout<< "Enter elements of array: ";
    // cin >> arr; // terminate after space
    cin.getline(arr,6,'$');

    for(char ch : arr){
        cout << ch << " ";
    }
    cout << endl;

    for(int i = 0; i < arr[i] != '\0'; i++){
        len++;
    }
    cout << "Length : " << len;
    return 0;
}