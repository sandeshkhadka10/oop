#include<iostream>
using namespace std;

inline int factorial(int n)
{
	int result=1,i=0;
	for (i=1;i<=n;i++)
	{
		result=result*i;
	}
	return result;
}
int main()
{
	int num=0,result=0;
	cout<<"Enter the non-negative number: ";
	cin>>num;
	if(num<0)
	{
		cout<<"The given number factorial cannot be determined";
	}
	else
	{
		result=factorial(num);
		cout<<"Factorial of "<<num<<" is "<<result;
	}
	return 0;
}
