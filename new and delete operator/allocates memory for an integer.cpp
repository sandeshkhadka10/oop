#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int num=0;
	cout<<"Enter the num: ";
	cin>>num;
	int *p;
	p=new int;
	if(p==0)
	{
		cout<<"Sorry,Memory couldnot be allocated";
		exit(0);
	}
	*p=num;
	cout<<"The dynamically allocated number is "<<*p;
	
	delete p;
	
	return 0;
		
	
}
