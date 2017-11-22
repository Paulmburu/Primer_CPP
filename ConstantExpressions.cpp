#include <iostream>
using namespace std;

int main()
{
	const int max_files = 20; // max_files is a constant expression
	const int limit = max_files + 1; // limit is a constant expression
	int staff_size = 27; // staff_size is not a constant expression
	
	//even though sz is a const , the value of its initializer is not known until run time
	const int sz = get_size(); // sz is not a constant expression
	
	/*
	 * Under the new standard, we can ask the compiler to verify that a variable is a
	 * constant expression by declaring the variable in a constexpr declaration
	 * /
	constexpr int mf = 20; // 20 is a constant expression
	constexpr int limit = mf + 1; // mf + 1 is a constant expression
	constexpr int sz = size(); // ok only if size is a constexpr funct
}
