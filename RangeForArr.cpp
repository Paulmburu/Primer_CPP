#include <iostream>
using namespace std;

int main(){
	constexpr size_t rowCnt=3, colCnt=4;
	int ia[rowCnt][colCnt]; //12 unintiliazed elements
	size_t cnt=0;
	
	for(auto &row: ia)//for every element in the outer array
		for(auto &col: row){//for every element in the inner array
		col=cnt; //give this element the next value
		++cnt;  //increment cnt
		}
		
		
		/*
		 *To use a multidimensional array in a range for , the loop control variable
		 * for all but the innermost array must be references. 
		 */
		
	for(auto &row: ia)
		for(auto &col:row){
			cout<<col;}
			
		
		
}
