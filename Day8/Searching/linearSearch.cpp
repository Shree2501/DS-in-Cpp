#include <iostream>
using namespace std;
int main()
{
    int key,i,flag=0,pos=-1;
    int a[5];
    cout<<"Enter 5 elements of an array: "; 
    for(int j=0; j<5;j++)  
    {
        cin>>a[j];
    }
    for(int k=0;k<5;k++)
    {
        cout<<a[k];
    }
    
    cout<<"\nEnter the number to be searched: ";
    cin>>key;
    for(i=0;i<=5;i++)
    {
        if(a[i] == key)
        {
            flag=1;
            pos=i;
        }
    }
    if(flag == 1)
    {
        cout<<"Element "<<key<<" found at "<<pos+1;
    }
    else
    {
        cout<<"element "<<key<<" not found";
    }
    return 0;
}
