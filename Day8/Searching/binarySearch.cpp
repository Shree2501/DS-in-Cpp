#include <iostream>
using namespace std;
int main()
{
    int a[5],i,mid,key,low=0,high=5,flag=0;
   
    for(i=0;i<5;i++)
    {
        cout<<"Enter "<<i+1<<" element of an array: ";
        cin>>a[i];
    }
    cout<<"\nEnter the element to be searched: ";
    cin>>key;
   
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
        {
            flag=1;
            break;
        }
        else if(key>=a[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(flag==1)
    {
        cout<<"\nElement "<<key<<" found at "<<mid+1;
    }
    else
    {
        cout<<"\nElement "<<key<<" not found";
    }
    return 0;
}