#include <iostream>
using namespace std;

int main()
{
	double obj = 3.14, *pd = &obj;
	// ok: void* can hold the address value of any data pointer type
	
	void *pv = &obj; // obj can be an object of any type
	pv = pd; // pv can hold a pointer to any type
}
