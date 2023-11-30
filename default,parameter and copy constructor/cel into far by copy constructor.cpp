#include<iostream>
using namespace std;

class test
{
	private:
		float c;
	public:
		test(float c=0.0)
		{
			this->c=c;
		}
		void getdata()
		{
			cout<<"Enter the temp in celcius: ";
			cin>>c;
		}
		test(test &value)
		{
			c=value.c;
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
	test t1;
	t1.getdata();
	test t2(t1);
	t2.showdata();
	return 0;
}
