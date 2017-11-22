#include <iostream>
using namespace std;

int main()
{
	int ival = 1024;
	int &refVal = ival; // refVal refers to (is another name for) ival
	//~ int &refVal2; // error: a reference must be initialized
	cout<<"ival "<<ival<<"\nrefVal "<<refVal<<endl;
	
	refVal = 2; // assigns 2 to the object to which refVal refers, i.e., to ival
	cout<<"refVal "<<refVal<<"\nival "<<ival<<endl;
	
	int ii = refVal; // same as ii = ival
	cout<<"ii "<<ii<<endl;
	
	// ok: refVal3 is bound to the object to which refVal is bound, i.e., to ival
	int &refVal3 = refVal;
	cout<<"refVal3 "<<refVal3<<endl;
	// initializes i from the value in the object to which refVal is bound
	int n = refVal; // ok: initializes i to the same value as ival
	cout<<"n "<<n<<endl;
	
	//~ int i = 1024, i2 = 2048; // i and i2 are both ints
	//~ int &r = i, r2 = i2; // r is a reference bound to i; r2 is an int
	//~ int i3 = 1024, &ri = i3; // i3 is an int; ri is a reference bound to i3
	//~ int &r3 = i3, &r4 = i2; // both r3 and r4 are references

	//~ int &refVal4 = 10; // error: initializer must be an object
	//~ double dval = 3.14;
	//~ int &refVal5 = dval; // error: initializer must be an int object
	
	
	
	int i = 0, &r1 = i; double d = 0, &r2 = d;
	r2 = 3.14159;
	cout<<r2<<"\n"<<r1<<endl;
	//~ r2 = r1;
	//~ cout<<r2<<endl;
	i = r2;
	cout<<i<<endl;
	r1 = d;
	cout<<r1<<endl;


	}
