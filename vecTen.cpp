#include <iostream>
#include <vector>

using namespace std;
int main(){
	vector<int> ar(5,0);
	for(int i=1;i<5;i++)
	ar[i]=i;
	
	for(auto a:ar){
		cout<<a<<" ";
		}
	}
