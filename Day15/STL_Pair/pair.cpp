#include <iostream>
#include <vector>
using namespace std;

int main(){
    pair<int , int> p1 = {1,2}; 
    cout << p1.first << endl;
    cout << p1.second << endl;

    pair<int , pair<int, int>> p2 = {1,{2,3}}; 
    cout << p2.first << endl;
    cout << p2.second.first << endl;
    cout << p2.second.second << endl;

    pair<int , char> p3 = {1,'a'}; 
    cout << p3.first << endl;
    cout << p3.second << endl;
}