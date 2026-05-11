#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string str;
    string rev;
    cout <<"Enter the string: ";
    getline(cin,str);

    rev = str;
    reverse(str.begin(), str.end());
    if( str == rev)
        cout << "PALINDROME";
    else
        cout << "NOT PALINDROME";
    return 0;
}