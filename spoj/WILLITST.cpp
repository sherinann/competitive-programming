#include <iostream>
using namespace std;
int main(){
	long long n;
	cin>>n;
	if(n&&!(n&(n-1)))
		cout<<"TAK";
	else
		cout<<"NIE";
}