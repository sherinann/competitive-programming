#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	//ios_base::sync_with_stdio(false);
	double a;
	cin>>a;
	while(a!=0.00){
		double sum=0.00,i=2.00;
		while(sum<a){
			sum+=1/(i);
			i++;
		}
		cout<<i-2<<" card(s)\n";
		cin>>a;
	}

}
