#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string str("some string");
	// print the characters in str one character to a line
	for (auto &c : str) // for every char in str
	c=toupper(c);
	cout << str << " "; // print the current character followed by a newline
	
	
	cout<<endl;
	string s("hello world !!!");
	// punct_cnt has the same type that s.size returns; see § 2.5.3 (p. 70)
	decltype(s.size()) punct_cnt = 0;
	// count the number of punctuation characters in
	for(auto c:s)	// for every char in s
	if(ispunct(c)) // if the character is punctuation
	punct_cnt++;  // increment the punctuation counter
	cout<<punct_cnt<< " punctuation characters in " << s << endl;
	
	string n="paul";
	n[0]=toupper(n[0]);
	cout<<n<<endl;
}
