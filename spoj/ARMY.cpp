#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int t,g,m,i,j;
	cin>>t;
	while(t--){
		cin>>g>>m;
		int a[100000],b[100000];
		for(i=0;i<g;i++)
			cin>>a[i];
		for(i=0;i<m;i++)
			cin>>b[i];
		sort(a,a+g);
		sort(b,b+m);
		i=0,j=0;
		while((i<g)&&(j<m)){
			if(a[i]<b[j])
				i++;
			else
				j++;
		}
		if(i==g)
			cout<<"MechaGodzilla";
		else
			cout<<"Godzilla";
		cout<<"\n";
	}
}