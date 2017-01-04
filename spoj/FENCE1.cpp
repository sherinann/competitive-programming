#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int l;
	cin>>l;
	while(l){
		float r=l/3.14;
		float a=3.14*r*r/2;
		cout<<setprecision(2)<<a<<"\n";
		cin>>l;
	}
}