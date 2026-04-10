#include <iostream>
using namespace std;
int main(){
    int time = 20;
    bool isDay = time < 18;

    if (isDay) {
        cout << "Good day.";
    } 
    else {
        cout << "Good evening.";
    }
}