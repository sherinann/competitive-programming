#include <iostream>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		int k=5,p=0;
		cin>>n;
		if(n<5)
			cout<<0<<"\n";
		else{
			while(k<=n){
				p+=n/k;
				k*=5;
			}
			cout<<p<<"\n";
		}
	}

}