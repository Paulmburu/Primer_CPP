#include <iostream>
#include <string>

using namespace std;

int main()
{
	//~ string word;
	//~ while (cin >> word) // read until end-of-file
	//~ cout << word<<" "; // write each word followed by a new line
	
	
	string line;
	// read input a line at a time until end-of-file
	while (getline(cin, line))
	if(!line.empty())
	if(line.size()>10)
	cout << line << endl;
	return 0;
	}
