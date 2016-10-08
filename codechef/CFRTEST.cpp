#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n,j,i;
	long t;
	cin>>t;
	while(t--){
		cin>>n;
		int long *a=new int long(n);
		for(i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		int k=n;
		for(i=1;i<n;i++){
			if(a[i]==a[i-1])
				k--;
		}
		cout<<k<<"\n";
	}
}