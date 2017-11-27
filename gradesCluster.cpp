#include <iostream>
#include <vector>

using namespace std;
int main(){
	// count the number of grades by clusters of ten: 0--9, 10--19, . .. 90--99, 100
	vector<unsigned> scores(11,0);
	unsigned grade;
	while(cin>>grade){
		if(grade<=100)
		++scores[grade /10];
		}
		
		
		//~ for(int i=0;i<=11;i++)
		//~ {
			//~ cout<<scores[i]<<" ";
			//~ }
			auto beg=scores.begin(), end=scores.end();
			while(scores != end n){
				cout<<scores<<" ";
				}
	}
