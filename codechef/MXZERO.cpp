#include <iostream>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int a;
		int sum0=0,sum1=0;
		for(int i=0;i<n;i++){
			cin>>a;
			if(a==0)
				sum0++;
			else
				sum1++;
		}
		if(sum1==n||sum0==n)
			cout<<n<<"\n";
		else if(sum1=1||sum0==1)
			cout<<1<<"\n";
		else
			cout<<0<<"\n";



	}
}