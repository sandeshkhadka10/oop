#include<iostream>
using namespace std;

class test
{
	private:
		float c;
	public:
		test()
		{
			c=45;
		}
		void showdata()
		{
			float f;
			f=c*1.8+32;
			cout<<"The temperature in celcius is "<<f;
		}
};
int main()
{
	test t;
	t.showdata();
	return 0;
}
