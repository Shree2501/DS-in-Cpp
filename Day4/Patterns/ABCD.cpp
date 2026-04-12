#include <iostream>
using namespace std;
int main(){
    int i,j;
    for(i=65;i<=69;i++)
    {
        for(j=69;j>=i;j--)
        {
            cout << char(i);
        }
        cout << endl;
    }
    return 0;
}