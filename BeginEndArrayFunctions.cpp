#include <iostream>

using namespace std;
int main(){
	int ai[]={0,1,2,3,4,5,6,7,8,9};  // ai is an array of ten ints
	int *beg= begin(ai);  //pointer to the first element in ai
	int *last=end(ai); //pointer one past last element in ai
	
	
	//~ while(beg != last && beg >= 0)
	//~ ++beg;
	
	cout<<*beg<<" "<<*last<<endl;
	
	}
