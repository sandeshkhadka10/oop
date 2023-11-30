#include<iostream>
using namespace std;
class test2;
class test1
{
	private:
		int a;
		friend class test2;
};
class test2
{
	private:
		test1 t1;
		int b;
	public:
		void getdata()
		{
			cout<<"Enter the value of a and b: ";
			cin>>t1.a>>b;
		}
		void sum()
		{
			int c=0;
			c=t1.a+b;
			cout<<"The sum is "<<c;
		}
};
int main()
{
	test2 t2;
	t2.getdata();
	t2.sum();
	return 0;
}
