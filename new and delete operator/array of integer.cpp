#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int num=0,i=0;
	cout<<"Enter the number you want: ";
	cin>>num;
	float *p;
	p =new float[num];
	cout<<"Integers values"<<endl;
	for(i=0;i<=num;i++)
	{
		cout<<"Value of "<<i+1<<"st array is: ";
		cin>>*(p+i);
	}
	cout<<"Integers values are"<<endl;
	for(i=0;i<=num;i++)
	{
			cout<<"Value of "<<i+1<<"st array is: "<<*(p+i)<<endl;
	}
	delete p;
	return 0;
}
