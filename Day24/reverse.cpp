#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string str = "Shree";
    cout << str << endl;
   
    reverse(str.begin(), str.end());
    cout << "Reversed: " << str << endl;
    return 0;
}