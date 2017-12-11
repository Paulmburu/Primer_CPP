#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	vector<string> text={"hello dutchman"};
	
	for(auto it=text.cbegin();it != text.cend() && !it->empty();++it)
	cout<<*it<<endl;
	
	}
