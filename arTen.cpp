#include <iostream>

using namespace std;

int main(){
	int ar[10]={};
	for(int i=1;i<=9;++i)
	ar[i]=i;
	
	for(auto a:ar)
	cout<<a<<" ";
	
	}
