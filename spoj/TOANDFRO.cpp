#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int n,y;
	char a[202];
	cin>>y;
	while(y){
		cin>>a;
		int l=strlen(a);
		/*if(l%y!=0){
			int p=l%y;
			for(int i=0;i<p;i++)
				strcat(a,"x");
		}*/
		int x=l/y;
		for(int i=1;i<x;i+=2){
			reverse(a+i*y,a+i*y+y);
		}
		//cout<<a<<"\n";
		for(int i=0;i<y;i++){
			for(int j=0;j<x;j++)
				cout<<a[j*y+i];
		}
		cout<<"\n";
		cin>>y;
	}
	cout<<"\n";
}