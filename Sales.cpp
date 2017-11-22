#include <iostream>
using namespace std;

struct Sales_data{
	string bookNo;
	unsigned units_sold=0;
	double revenue =0.0;
	};
	
int main(){
	double price=o; // price per book, used to calculate total revenue
	Sales_data data1,data2;
	
	// read the first transactions: ISBN, number of books sold, price per book
	cin>>data1.bookNo>>data1.units_sold>>price;
	
	// calculate total revenue from price and units_sold
	data1 revenue=data1.units_sold*price;
	
	cin>>data2.bookNo>>data2.units_sold>>price;
	data2 revenue=data2.units_sold*price;
	
	if (data1.bookNo == data2.bookNo) {
	unsigned totalCnt = data1.units_sold + data2.units_sold;
	double totalRevenue = data1.revenue + data2.revenue;
	// print: ISBN, total sold, total revenue, average price per book
	std::cout << data1.bookNo << " " << totalCnt<< " " << totalRevenue << " ";
	if (totalCnt != 0)
	std::cout << totalRevenue/totalCnt << std::endl;
	else
	std::cout << "(no sales)" << std::endl;
	return 0; // indicate success
	} else { // transactions weren't for the same ISBN
	std::cerr << "Data must refer to the same ISBN"<< std::endl;
	return -1; // indicate failure
	
	}
}
