#include <iostream>
using namespace std;
int main()
{
	int n,p;
	cin>>n;
	while(n){
			p=n*(n+1)*(2*n+1)/6;
			cout<<p<<"\n";
			cin>>n;
	}
	cout<<"\n";
}