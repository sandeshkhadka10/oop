#include<iostream>
using namespace std;

class test
{
	private:
		int p,t,r;
		
	public:
		void getdata()
		{
			cout<<"Enter the value of p,t and r: ";
			cin>>p>>t>>r;
		}
		int calculate()
		{
			int si=0;
			si=(p*t*r)/100;
			return si;
		}
		void displaydata()
		{
			cout<<"The SI is "<<calculate()<<endl;
		}
};
int main()
{
	test t;
	t.getdata();

	t.displaydata();
	return 0;
	
}
