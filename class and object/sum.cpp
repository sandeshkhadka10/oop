#include<iostream>
using namespace std;

class sum
{
	private:
		int a,b,s;
		public:
			void getdata()
			{
				cout<<"Enter the value of a and b: ";
				cin>>a>>b;
			}
			void displaydata()
			{
				s=a+b;
				cout<<"The sum is "<<s<<endl;
			}
};

int main()
{
	sum s;
	s.getdata();
	s.displaydata();
	return 0;
}
