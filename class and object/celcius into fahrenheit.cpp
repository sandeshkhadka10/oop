#include<iostream>
using namespace std;

class temp
{
	private:
		int c,f;
		public:
			void getdata()
			{
				cout<<"Enter the temperature in celcius: ";
				cin>>c;
			}
			void displaydata()
			{
				f=c*1.8+32;
				cout<<"The temperature in fahrenheit is "<<f<<endl;
			}
};

int main()
{
	temp s;
	s.getdata();
	s.displaydata();
	return 0;
}
