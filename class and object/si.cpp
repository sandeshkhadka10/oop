#include<iostream>
using namespace std;

class interest
{
	private:
		int p,t,r,si;
		public:
			void getdata()
			{
				cout<<"Enter the value for p,t and r: ";
				cin>>p>>t>>r;
			}
			void displaydata()
			{
				si=p*t*r/100;
				cout<<"The SI is "<<si<<endl;
			}
};

int main()
{
	interest s;
	s.getdata();
	s.displaydata();
	return 0;
}
