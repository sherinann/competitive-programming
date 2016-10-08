#include <iostream>
using namespace std;
int main(){
	long long a,b,l,m;
	long r;
	cin>>a>>b;
	while(a&&b){
		l=a;
		m=b;
		do{
			r=a%b;
			a=b;
			b=r;
		}while(r);
		cout<<l*m/(a*a)<<"\n";
		cin>>a>>b;
	}
}