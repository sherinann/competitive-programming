#include <iostream>
using namespace std;
int main(){
	int t,x,y;
	cin>>t;
	while(t--){
		cin>>x>>y;
		if(x==y){
			if(x%2==0)
				cout<<x+y;
			else
				cout<<x+y-1;
		}
		else if(x-y==2){
			if(x%2==0)
				cout<<x+y;
			else
				cout<<x+y-1;
		}
		else
			cout<<"No Number";
		cout<<"\n";
	}
}
