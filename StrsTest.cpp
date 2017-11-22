#include <iostream>
#include <string>

using namespace std;

int main(){
	string a,b;
	
	cout<<"enter your first string \n";
	cin>>a;
	cout<<"enter your second string\n";
	cin>>b;
	
	cout<<a+" "+b<<endl;
	if(a==b){
		
		cout<<"equal"<<endl;
		}else{
		cout<<"not equal\n";
		if(a>b){
			cout<<a<<" greater\n";
			}else if(b>a)
			{
				cout<<b<<" greater\n";
				}
		}
	}

