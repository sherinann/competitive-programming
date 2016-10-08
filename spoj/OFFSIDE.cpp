#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int na,nb,i,flag;
	long a[11],b[11];
	cin>>na>>nb;
	while(na||nb){
		for(i=0;i<na;i++)
			cin>>a[i];
		for(i=0;i<nb;i++)
			cin>>b[i];
		sort(a,a+na);
		sort(b,b+nb);
		flag=1;
		if(a[0]<b[nb-2])
			flag=0;
		if(flag)
			cout<<"N\n";
		else
			cout<<"Y\n";
		cin>>na>>nb;

	}
}
