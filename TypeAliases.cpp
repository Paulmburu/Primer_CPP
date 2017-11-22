#include <iostream>
using namespace std;

int main()
{
	typedef double wages; // wages is a synonym for double
	typedef wages base, *p; // base is a synonym for double, p for double*
	
	using SI = Sales_item; // SI is a synonym for Sales_item
	
	wages hourly, weekly; // same as double hourly, weekly;
	SI item; // same as Sales_item item
	
	typedef char *pstring;
	const pstring cstr = 0; // cstr is a constant pointer to char
	const pstring *ps; // ps is a pointer to a constant pointer to char
	
	}
