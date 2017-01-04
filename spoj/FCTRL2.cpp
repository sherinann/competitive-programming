#include <iostream>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		long f=1;
		for(int i=2;i<=n;i++)
			f*=i;
		cout<<f<<"\n";
	}
}