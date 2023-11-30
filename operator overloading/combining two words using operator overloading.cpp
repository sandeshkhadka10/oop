#include<iostream>
#include<string.h>
using namespace std;
class Test
{
	private:
		char string[50];
	public:
		void getdata()
		{
			cout<<"Enter the string: ";
			cin>>string;
		}
		void showdata()
		{
			cout<<"String= "<<string;
		}
		Test operator + (Test T2)
		{
			Test T3;
			strcpy(T3.string,string);
			strcat(T3.string," ");
			strcat(T3.string,T2.string);
			return T3;
		}
		
};
int main()
{
	Test T1,T2,T3;
	T1.getdata();
	T2.getdata();
	T3=T1+T2;
	T3.showdata();
	return 0;
	
}
