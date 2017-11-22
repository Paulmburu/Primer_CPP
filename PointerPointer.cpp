#include <iostream>
using namespace std;

int main()
{
	int ival = 1024;
	int *pi = &ival; // pi points to an int
	cout<<"*pi "<<*pi<<endl;
	int **ppi = &pi; // ppi points to a pointer to an int
	cout<<"**ppi "<<**ppi<<endl;
	
	
	cout << "The value of ival\n"<< "direct value: " << ival << "\n"
	<< "indirect value: " << *pi << "\n"<< "doubly indirect value: " << **ppi
	<< endl;
}
