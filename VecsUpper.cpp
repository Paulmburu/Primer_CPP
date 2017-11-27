#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main(){
	
	string w;
	vector<string> line;

	while(cin>>w){
		
		line.push_back(w);
	
		}
	for(auto l:line){
		for(auto &c:l)
		c=toupper(c);
		cout<<l<<endl;
		}
	}
