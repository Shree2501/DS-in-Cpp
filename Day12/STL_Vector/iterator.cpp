#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3};

    // iterator 
    vector<int> :: iterator i;
    for(i = vec.begin(); i != vec.end(); i++ ){
        cout << *(i) << " ";
    }
    cout << endl;

    // reverse iterator
    vector<int> :: reverse_iterator ri;
    for(ri = vec.rbegin(); ri != vec.rend(); ri++ ){
        cout << *(ri) << " ";
    }
    cout << endl;

    // auto keyword
    for(auto i = vec.rbegin(); i != vec.rend(); i++ ){
        cout << *(i) << " ";
    }
    cout << endl;
    return 0;
}