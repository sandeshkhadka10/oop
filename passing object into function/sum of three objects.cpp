#include<iostream>
using namespace std;

class Test
{
	private:
		int a;
	public:
		void seta(int value)
		{
			a=value;
		}
		int geta()
		{
			return a;
		}
};
int main()
{
	Test t[3];
	int i=0,value=0,sum=0;
	cout<<"Enter the values for t[3] objects: "<<endl;
	
		for(i=0;i<=2;i++)
		{
			cout<<"Enter the value for object "<<i+1<<": ";
			cin>>value;
			t[i].seta(value);
		}
	
	//adding the t[3] objects
	for(i=0;i<=2;i++)
	{
		sum=sum+t[i].geta();
	}
	cout<<"The sum of the three objects is: "<<sum;
	return 0;
	
}
