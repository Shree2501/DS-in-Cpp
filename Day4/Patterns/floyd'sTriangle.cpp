#include <iostream>
using namespace std;
int main(){
    int i,j,n,a=1;
    cout << "Enter the number of rows: ";
    cin >> n;
    
    for(i=1;i<=n;i++)
    {   
    	for(j=i;j>=1;j--)
    	{
    		cout << a << " ";
    		a++;
    	}
        cout << endl;
    }
    return 0;
}