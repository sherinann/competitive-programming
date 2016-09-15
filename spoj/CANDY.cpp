#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int x,j;
	cin>>x;
	while(x!=-1){
		int a[10001],count=0;
		long long sum=0;
		for(int i=0;i<x;i++){
			cin>>a[i];
			sum+=a[i];
		}
		sort(a,a+x);
		if(sum%x!=0){
			cout<<-1<<"\n";
		}
		else{
			int avg=sum/x;
			for(int i=0,j=x-1;a[i]<avg;){
				int k=avg-a[i];
				if((a[j]-avg)>k){
					a[i++]+=k;
					a[j]-=k;
					count+=k;
				}
				else if(a[j]-avg<k){
					int p=a[j]-avg;
					a[j--]-=p;
					a[i]+=p;
					count+=p;
				}
				else{
					a[i++]=k;
					a[j--]-=k;
					count+=k;
				}
			}
			cout<<count<<"\n";
		}
			cin>>x;
	}
}