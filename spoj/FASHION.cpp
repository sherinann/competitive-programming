#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int t,n,a[1001],b[1001];
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		int sum=0;
		for(int i=0;i<n;i++){
			a[i]*=b[i];
			sum+=a[i];
		}
		cout<<sum<<"\n";
	}
}