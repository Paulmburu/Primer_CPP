#include <iostream>
using namespace std;

int main()
{
	int ival = 42;
	int *p = &ival; // p holds the address of ival; p is a pointer to ival
	
	cout<<*p<<endl;
	*p = 0; // * yields the object; we assign a new value to ival through p
	cout << *p; // prints 0
	
	cout<<"\n"<<ival<<endl;
	
	int ival = 1024;
	int *pi = 0; // pi is a valid, null pointer
	int *pi2 = &ival; // pi2 is a valid pointer that holds the address of ival
	if (pi) // pi has value 0, so condition evaluates as false
	// ...
	if (pi2) // pi2 points to ival, so it is not 0; the condition evaluates as true
	// ...
}
