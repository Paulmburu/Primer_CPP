#include <iostream>
//some rules about arrays in C+++

using namespace std;

int main(){
	
	
	unsigned cnt=42;  //not a constant expression
	constexpr unsigned sz= 42;  //not a constant expression
	int arr[10];  //array of 10 ints
	int *parr[sz];  //array of 42 pointers to int
	string bad[cnt]; // error: cnt is not a constant expression
	string strs[get_size()]; // ok if get_size is constexpr, error otherwise
	
	const unsigned sz = 3;
	int ia1[sz] = {0,1,2}; // array of three ints with values 0, 1, 2
	int a2[] = {0, 1, 2}; // an array of dimension 3
	int a3[5] = {0, 1, 2}; // equivalent to a3[] = {0, 1, 2, 0, 0}
	string a4[3] = {"hi", "bye"}; // same as a4[] = {"hi", "bye", ""}
	int a5[2] = {0,1,2}; // error: too many initializers
	
	char a1[] = {'C', '+', '+'}; // list initialization, no null
	char a2[] = {'C', '+', '+', '\0'}; // list initialization, explicit null
	char a3[] = "C++"; // null terminator added automatically
	const char a4[6] = "Daniel"; // error: no space for the null!
	
	int a[] = {0, 1, 2}; // array of three ints
	int a2[] = a; // error: cannot initialize one array with another
	a2 = a; // error: cannot assign one array to another
	
	int *ptrs[10]; // ptrs is an array of ten pointers to int
	int &refs[10] = /* ? */; // error: no arrays of references
	int (*Parray)[10] = &arr; // Parray points to an array of ten ints
	int (&arrRef)[10] = arr; // arrRef refers to an array of ten ints
	
	int *(&arry)[10] = ptrs; // arry is a reference to an array of ten pointers
	
	}
