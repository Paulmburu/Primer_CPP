#include <iostream>

using namespace std;
int main(){
	int ia[3][4]={// Three elements ,each element is an array of size 4
		{0,1,2,3},//initializers for row indexed by 0
		{4,5,6,7},//initializers for row indexed by 1
		{8,9,10,11}//intiliazers for row indexed by 2
	};
	
	
	for(int i=0;i!=3;++i){
		for(int j=0;j!=4;++j){
		cout<<ia[i][j]<<" ";}
		cout<<endl;}
		
	
	}
