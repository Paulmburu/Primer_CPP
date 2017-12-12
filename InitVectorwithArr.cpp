#include <iostream>
#include <vector>

using namespace std;
int main(){
	int int_arr[]={0,1,2,3,4,5};
	// ivec has six elements; each is a corresponding element in int_arr
	vector<int> ivec(begin(int_arr),end(int_arr));
	int l=ivec.size();
	for(int i=0;i!=l;++i)
	cout<<ivec[i]<<endl;
	}
