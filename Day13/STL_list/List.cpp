#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main(){
    list<int> l = {1,2,3};

    l.push_back(1);
    l.emplace_back(2);
    l.push_front(3);
    l.push_front(4);

    l.pop_back();
    l.pop_front();

    for(int val : l){
        cout << val << " ";
    }
    cout << "Size: " << l.size() << endl;
    cout << "front: " << l.front() << endl;
    cout << "back: " << l.back() << endl;
    cout << "begin: " << *l.begin() << endl;
    cout << "end: " << *l.end() << endl;
    return 0;
}