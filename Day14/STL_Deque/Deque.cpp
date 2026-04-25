#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main(){
    deque<int> d = {1,2,3};

    cout << d[1] << endl;

    d.push_back(1);
    d.emplace_back(2);
    d.push_front(3);
    d.push_front(4);

    d.pop_back();
    d.pop_front();

    for(int val : d){
        cout << val << " ";
    }
    cout << "Size: " << d.size() << endl;
    cout << "front: " << d.front() << endl;
    cout << "back: " << d.back() << endl;
    cout << "begin: " << *d.begin() << endl;
    cout << "end: " << *d.end() << endl;
    return 0;
}