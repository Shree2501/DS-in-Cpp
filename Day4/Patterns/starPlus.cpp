#include <iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the value of rows: ";
    cin>>n;
    while(n%2!=0)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(j==(n+1)/2 || i==(n+1)/2)
                cout<<"*";
                else cout<<" ";
            }
            cout<<endl;
        }
        break;
    }
    if(n%2==0)
    cout<<"Enter odd no. of rows only...";
    return 0;
}
