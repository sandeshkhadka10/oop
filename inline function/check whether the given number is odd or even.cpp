#include<iostream>
using namespace std;

inline void check(int num)
{
	if(num%2==0)
	{
		cout<<"The num "<<num<<" is even";
	}
	else
	{
		cout<<"The num "<<num<<" is odd";
	}
}
int main()
{
	int n=0;
	cout<<"Enter the num: ";
	cin>>n;
	check(n);
	return 0;
}
