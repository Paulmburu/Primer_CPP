#include <iostream>
using namespace std;

int main(){
	int ia[3][4]={// Three elements ,each element is an array of size 4
		{0,1,2,3},//initializers for row indexed by 0
		{4,5,6,7},//initializers for row indexed by 1
		{8,9,10,11}//intiliazers for row indexed by 2
	};
	
	// p points to the first array in ia
	for(auto p=begin(ia);p!=end(ia);++p){
		//q points to the first element in the inner array
	for(auto q=begin(*p);q!=end(*p);++q)
	cout<<*q<<" "; //print the int value to which q points
	cout<<endl;
	}
	
	
	}

