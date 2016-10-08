#include <iostream>
using namespace std;
int main(){
	int t,n,d;
	cin>>t;
	while(t--){
		cin>>d>>n;
		int sum=0;
		for(int i=0;i<d;i++){
			sum=n*(n+1)/2;
			n=sum;
		}
		cout<<sum<<"\n";
	}
}	