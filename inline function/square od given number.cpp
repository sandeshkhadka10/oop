#include<iostream>
using namespace std;

inline int square(int n)
{
	return n*n;
}
int main()
{
	int result=0,num=0;
	cout<<"Enter the num: ";
	cin>>num;
	cout<<"The square of "<<num<<" is "<<square(num);
	return 0;
}
