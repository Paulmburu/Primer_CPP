#include <iostream>
using namespace std;

int main()
{
	int a=10;
	int *b=&a;
	cout<<*b<<endl;
	*b=12;
	cout<<a<<endl;
	}
