#include<iostream>
using namespace std;

class test
{
	private:
		int a,b;
		
	public:
		void getdata()
		{
			cout<<"Enter the value of a and b: ";
			cin>>a>>b;
		}
		void sum(test t1,test t2)
		{
			int c=0,w=0,x=0,total=0;
			
			w=t1.a+t1.b;
			cout<<"The sum of test t1 is "<<w<<endl;
			
			x=t2.a+t2.b;
			cout<<"The sum of test t2 is "<<x<<endl;
			
			total=w+x;
			cout<<"So the total sum is "<<total<<endl;
		}
};
int main()
{
	test t1,t2;
	t1.getdata();
	t2.getdata();
	t1.sum(t1,t2);
	return 0;
}
