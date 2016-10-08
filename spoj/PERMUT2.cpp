#include <iostream>
using namespace std;
int main(){
	int t,i,a[100001],b[100001];
	long n;
   	cin>>n;
	while(n!=0){
		for(i=1;i<=n;i++){
			cin>>a[i];
			b[a[i]]=i;
		}
		int flag=1;
		for(i=1;i<=n;i++){
			if(a[i]!=b[i]){
				flag=0;
				break;
			}
		}
		if(flag)
			cout<<"ambiguous\n";
		else
			cout<<"not ambiguous\n";
		cin>>n;
	}
}