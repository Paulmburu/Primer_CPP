#include <iostream>

using namespace std;
int main(){
	// count the number of grades by clusters of ten: 0--9, 10--19, ... 90--99, 100
	unsigned scores[11] = {}; // 11 buckets, all value initialized to 0
	unsigned grade;
	while (cin >> grade) {
	if (grade <= 100)
	++scores[grade/10]; // increment the counter for the current cluster
	}
		for(auto i:scores)
		cout<<i<<" ";
		}
