#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    
    if(p1.first < p2.first) return true;
    else return false;
}

int main(){
    vector<pair<int, int>> vec = {{3,1},{2,1},{4,2},{5,3}};
    sort(vec.begin(), vec.end(), comparator);

    // reverse(vec.begin(), vec.end());
    
    for(auto v: vec){
        cout << v.first <<" " << v.second << endl;
    }
    cout << endl;
    return 0;
}