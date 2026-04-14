#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int first=0,second=1,next=0;
    for(int i=0; i<n; i++)
    {
        cout << first;
        next = first + second;
        first = second;
        second = next;
    }
    cout<<endl;
}
int main()
{   
    int n;
    cout<<"enter the range: ";
    cin>>n;
    fibonacci(n);
    return 0;
}