#include <iostream>
using namespace std;
int main(){
	int t,n;
	long a[1001] ,b[1001];
	cin>>t;
	while(t--){
		cin>>n;
		int large=0,ptr=0,i;
		for(i=0;i<n;i++){
			cin>>a[i]>>b[i];
			if(large==a[i]){
				if(b[ptr]<b[i]){
					large=a[i];
					ptr=i;
				}
			}
			else if(large<a[i]){
				large=a[i];
				ptr=i;
			}
			else
				continue;
		
		}
		
		int flag=1;
		for(i=0;i<n;i++){
			if(i==ptr)
				continue;
			else{
				if(b[i]>=large){
					flag=0;
					cout<<-1<<"\n";
					break;
				}
			}
		}
		if(flag)
			cout<<ptr+1<<"\n";

	}
}