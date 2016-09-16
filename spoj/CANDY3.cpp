#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int t,n;
	cin>>t;
	while(t--){
		
		cin>>n;
		unsigned long long int sum=0;
		//char p[201];
		//cin.getline(p,201S);
		long long int  a;
		for(int i=0;i<n;i++){
			cin>>a;
			sum+=a%n;
		}
		if(sum%n)
			cout<<"NO"<<"\n";
		else 
			cout<<"YES"<<"\n";

	}
}	