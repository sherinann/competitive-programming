#include <iostream>
#include <algorithm>
using namespace std;
//ios_base:sync_with_stdio(false);
int main(){
	int n,t;
	cin>>t;
	while(t--){
		cin>>n;
		int *a=new int();
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		cout<<a[0]+a[1]<<"\n";
	}
	

}