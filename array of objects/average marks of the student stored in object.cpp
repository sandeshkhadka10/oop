#include<iostream>
#include<string>
using namespace std;
class Student
{
	private:
		string name;
		float marks;
	public:
		void getdata(string n,float m)
		{
			name=n;
			marks=m;
		}
		float getmarks()
		{
			return marks;
		}
};
int main()
{
	Student *s;
	int i=0,n=0;
	cout<<"Enter the no of student you want to add: ";
	cin>>n;
	s=new Student [n];
	cout<<"Enter the student name and marks: "<<endl;
	for(i=0;i<=n-1;i++)
	{
		string name;
		float marks;
		cout<<"Enter the name of "<<i+1<<" student: ";
		cin.ignore();
		getline(cin,name);
		cout<<"Enter the marks of "<<i+1<<" student: ";
		cin>>marks;
		s[i].getdata(name,marks);
	}
	float totalMarks=0,averageMarks=0;
	for(i=0;i<=n-1;i++)
	{
		totalMarks=totalMarks+s[i].getmarks();
	}
	averageMarks=totalMarks/n;
	cout<<"The average marks of the students are: "<<averageMarks;
	delete []s;
	return 0;
	
}
