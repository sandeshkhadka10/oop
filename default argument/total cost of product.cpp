#include<iostream>
using namespace std;

float totalcost(float unitprice=250,int quality=1)
{
	return unitprice*quality;
}
int main()
{
	cout<<"The total cost of product is "<<totalcost();
	return 0;
}
