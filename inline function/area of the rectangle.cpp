#include<iostream>
using namespace std;

inline void calculateArea(int l,int b)
{
	return l*b;
}
int main()
{
	int l=0,b=0;
	cout<<"Enter the length and breadth of the rectangle: ";
	cin>>l>>b;
	cout<<"The area of the rectangle is "<<calculateArea(l,b);
	return 0;
}
