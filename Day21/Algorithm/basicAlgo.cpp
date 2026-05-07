#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5,6};

    cout << "Min: " << *min_element(vec.begin(),vec.end()) << endl;
    cout << "Max: " << *max_element(vec.begin(),vec.end()) << endl;
    cout << "BS: " << binary_search(vec.begin(),vec.end(),4) << endl;

    reverse(vec.begin(), vec.end());
    for(auto v: vec){
        cout << v << " ";
    }
    cout << endl;
    return 0;
}