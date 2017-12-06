#include <iostream>

using namespace std;

int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int *p=arr; //p ponts to the first element in arr
	++p; //p points to arr[1]
	int *e = &arr[10];
	
	for(int *b =arr;b != e;++b)
	cout<<*b<<endl;
	}
