#include <iostream>
using namespace std;
int main(){
	long  b;
	int t,a;
	cin>>t;
	int k2[]={6,2,4,8},k3[]={1,3,9,7},k7[]={1,7,9,3},k8[]={6,8,4,2};
	while(t--){
		cin>>a>>b;
		a=a%10;
		if(a==0)
			cout<<0;
		else if(b==0||a==1)
			cout<<1;
		else if(a==5||a==6)
			cout<<a%10;
		else if(a==2)
			cout<<k2[b%4];
		else if(a==3)
			cout<<k3[b%4];
		else if(a==4){
			if(b%2)
				cout<<4;
			else
				cout<<6;
		}	
		else if(a==7)
			cout<<k7[b%4];
		else if(a==8)
			cout<<k8[b%4];
		else{
			if(b%2)
				cout<<9;
			else
				cout<<1;
		}
		cout<<"\n";
	}
}