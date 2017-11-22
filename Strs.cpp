#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1; // default initialization; s1 is the empty string
	string s2 = s1; // s2 is a copy of s1
	string s3 = "hiya"; // s3 is a copy of the string literal
	string s4(10, 'c'); // s4 is cccccccccc
	
	cout<<s1<<"\n"<<s2<<"\n"<<s3<<"\n"<<s4<<endl;
	


	/*
	 *string s1 	  //Default initialization; s1 is the empty string.
	 *string s2(s1) 	   //s2 is a copy of s1.
	 *string s2=s1 	   //Equivalent to s2(s1),s2 is a copy of s1.
	 *string s3("value") //s3 is a copy of the string literal, not including the null.
	 *string s3="value"  //Equivalent to s3("value"),s3 is a copy of the string literal.
	 *string s4(n, 'c')  //Initialize s4 with n copies of the character 'c'.
	 * 
	 */

	string s; // empty string
	cin >> s; // read a whitespace-separated string into s
	cout << s << endl; // write s to the output
	return 0;

}
