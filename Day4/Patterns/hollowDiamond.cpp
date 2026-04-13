#include <iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cout<<"enter lines: ";
	cin>>n;
	for(i=0; i<n; i++) {
		for(j=0; j<n-i-1; j++) {
			cout<<" ";
		}
		cout<<"*";
		if(i!=0) {
			for(k=0; k<2*i-1; k++) {
				cout<<" ";
			}
			cout<<"*";
		}
		cout<<endl;
	}
    for(i=0; i<n-1; i++) {
		for(j=0; j<=i; j++) {
			cout<<" ";
		}
		cout<<"*";
		if(i!=n-2) {
			for(k=0; k<2*(n-i)-5; k++) {
				cout<<" ";
			}
			cout<<"*";
		}
		cout<<endl;
	    
	}
}
