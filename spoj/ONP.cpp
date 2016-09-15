#include <iostream>
#include <stack>
#include <cctype>
#include <string>

int priority(char c){
	if(c=='+')
		return 1;
	else if(c=='-')
		return 2;
	else if(c=='*')
		return 3;
	else if(c=='/')
		return 4;
	else if(c=='^')
		return 5;
}
using namespace std;
int main(){
	int t;
	char k;
	cin>>t;
	char str[405];
	while(t--){
		stack<char> s;
		cin>>str;
		//char str1[]="(";
		//char str2[]=")";
		//str=str1.append(str);
		//str=str.append(str2);
		for(int i=0;str[i]!='\0';i++){
			if(isalpha(str[i]))
				cout<<str[i];
			else if(str[i]=='(')
				s.push(str[i]);
			else if(str[i]==')'){
				while(s.top()!='('){
					k=s.top();
					cout<<k;
					s.pop();
				}
				s.pop();
			}
			else{
				if(priority(str[i])<priority(s.top()))
					s.push(str[i]);
				else{
					while(priority(s.top())>=priority(str[i])&&!(s.empty())){
						k=s.top();
						s.pop();
						cout<<k;
					}
					s.push(str[i]);
				}
			}
		}
		cout<<"\n";

	}
}