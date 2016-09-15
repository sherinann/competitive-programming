#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int a1,a2,a3;
	cin>>a1>>a2>>a3;
	while(a1||a2||a3){
		if(a3-a2==a2-a1)
			cout<<"AP "<<2*a3-a2;
		else if(a3/a2==a2/a1)
			cout<<"GP "<<a3*(a3/a2);
		cout<<"\n";
		cin>>a1>>a2>>a3;
	}
	//cout<<"\n";
}