#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int i,e;
	unsigned long long n,x,y;
	for(i=0;i<10;i++){
		cin>>n>>e;
		x=(n-e)/2;
		y=x+e;
		cout<<y<<"\n"<<x<<"\n";
	}
}