#include <iostream>
using namespace std;

int main(){
	
	int ia[3][4]={// Three elements ,each element is an array of size 4
		{0,1,2,3},//initializers for row indexed by 0
		{4,5,6,7},//initializers for row indexed by 1
		{8,9,10,11}//intiliazers for row indexed by 2
	};
	
	
	//print the value of each element in ia; with each inner array on its own line
	//p points to array of 4 ints
	for(auto p=ia;p!=ia+3;++p)
	//q points to the first element of an array of 4 ints;that is , q points to an int
	for(auto q=*p;q!=*p+4;++q)
	cout<<*q<<" ";
	cout<<endl;
	}
