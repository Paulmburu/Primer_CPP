#include <iostream>

using namespace std;
int main(){ 
	constexpr size_t array_size = 10;
	int ia[array_size];
	for (size_t ix = 1; ix <= array_size-1; ++ix){
	ia[ix] = ix;}
	
	
	for(auto i:ia){
	cout<<i<<" ";
	}
	
	return 0;
	}
