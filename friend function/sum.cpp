#include<iostream>
using namespace std;

class test2;

class test1
{
	private:
		int a;
		
	public:
		void geta()
		{
			cout<<"Enter the value of a: ";
			cin>>a;
		}
	
	friend void sum(test1,test2);
};

class test2
{
	private:
		int b;
		
	public:
		void getb()
		{
			cout<<"Enter the value of b: ";
			cin>>b;
		}
		
	friend void sum(test1,test2);
};

void sum(test1 t1, test2 t2)
{
   int c;
   c=t1.a+t2.b;
   cout<<"The value of c is "<<c<<endl;
}

int main()
{
	test1 t1;
	test2 t2;
	t1.geta();
	t2.getb();
	sum(t1,t2);
	return 0;
}



