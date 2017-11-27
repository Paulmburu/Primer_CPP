#include <iostream>

using namespace std;
int main(){
	string nums[]={"one","two","three"};
	//~ string *p=&nums[0];
	string *p=nums; //assings to first element of array by default
	++p;
	cout<<*p<<endl;
	
	
	for(auto n:nums)
	cout<<n<<" ";
	}
