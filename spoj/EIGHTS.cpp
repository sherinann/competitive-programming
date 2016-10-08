#include <iostream>
using namespace std;
int main(){
	int t;
	long long n,r;
	cin>>t;
	while(t--){
		cin>>n;
		r=192+(n-1)*250;
		cout<<r<<"\n";
	}
}