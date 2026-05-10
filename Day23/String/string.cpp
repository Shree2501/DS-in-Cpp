#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string str = "Shree";
    cout << str << endl;

    str = "Hey";
    cout << str << endl;
    cout << "Length : " << str.length() << endl;

    string s;
    cout<< "Enter elements of array: ";
    getline(cin, s);
    cout << s << endl;

    // concatenation
    string s1 = "Hello";
    string s2 = "Shree";
    string s3 = s1 + s2;
    cout << s3 << endl;

    cout << (s1 == s2) << endl;
    return 0;
}