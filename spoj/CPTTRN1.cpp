#include <iostream>
using namespace std;
int main(){
	int t,r,c,i,j;
	cin>>t;
	while(t--){
		cin>>r>>c;
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				if(i%2==0){
					if(j%2==0)
						cout<<"*";
					else
						cout<<".";
				}
				else{
					if(j%2==0)
						cout<<".";
					else
						cout<<"*";
				}
			}
			cout<<"\n";
		}
	}
}