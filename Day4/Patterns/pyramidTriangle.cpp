#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(i=1;i<=n;i++)
    {    
        for(int k=n-i;k>0;k--)
        {
            cout << " ";
        }

        int a=1;
        for(j=1;j<i;j++)
        {
            cout << a;
            a++;
        }
        
        for(int k=i;k>0;k--)
        {
            cout << k;
        }

        cout<< endl;
    }

    return 0;
}