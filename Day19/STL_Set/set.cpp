#include <iostream>
#include <set>
using namespace std;

int main(){
    set <int> s;
    s.insert(1); // not take duplpicate values
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    for(auto val : s){
        cout << val << " ";
    }
    cout << endl;

    cout << "Size: " << s.size();
    cout << "Lower bound: " << *s.lower_bound((4)) << endl ;
    cout << "Upper bound: " << *s.upper_bound((4)) << endl ;
}
