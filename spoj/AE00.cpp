#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	//ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int i,j,sum=n;
	for(i=2;i*i<=n;i++){
		for(j=i;i*j<=n;j++)
			sum++;
	}
	cout<<sum;
}