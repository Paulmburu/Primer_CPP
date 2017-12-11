#include <iostream>
using namespace std;

int main(){
	constexpr size_t sz=5;
	int arr[sz]={1,2,3,4,5};
	int *ip=arr;
	int *ip2=ip+4;
	
	auto n =end(arr)-begin(arr);
	
	cout<<*ip<<" "<<*ip2<<" "<<n<<endl;
	
	
	}
