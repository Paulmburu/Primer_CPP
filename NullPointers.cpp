#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int *p1 = nullptr; // equivalent to int *p1 = 0;
	int *p2 = 0; // directly initializes p2 from the literal constant 0
	// must #include cstdlib
	int *p3 = NULL; // equivalent to int *p3 = 0;
	
	cout<<*p1<<"\n"<<*p2<<"\n"<<*p3<<endl;
	
	int zero = 0;
	pi = zero; // error: cannot assign an int to a pointer
	
	int i = 42;
	int *p1 = &i;
	cout<<*p1<<endl;
	*p1 = p1 *p1;
	cout<<*p1<<endl;
}
