#include<iostream>
#include<math.h>
using namespace std;

class interest
{
	private:
		int p,t,r,ci;
		public:
			void getdata()
			{
				cout<<"Enter the value for p,t and r: ";
				cin>>p>>t>>r;
			}
			void displaydata()
			{
				ci=p*pow((1-r/100),t)-1;
				cout<<"The CI is "<<ci<<endl;
			}
};

int main()
{
	interest s;
	s.getdata();
	s.displaydata();
	return 0;
}
