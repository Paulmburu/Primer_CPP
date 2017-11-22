#include <iostream>
using namespace std;

int main(){

	const int i = 42;
	
	auto j = i; 
	cout<<j<<endl;
	const auto &k = i; 
	cout<<k<<endl;
	auto *p = &i;
	cout<<*p<<endl;
	const auto j2 = i, &k2 = i;	
	cout<<j2<<k2<<endl;
}
