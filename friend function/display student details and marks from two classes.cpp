#include<iostream>
#include<string>
using namespace std;
class Marksheet;
class Student
{
	private:
		string name;
		int id;
	public:
		void getDetails()
		{
			cout<<"Enter the name: ";
			cin.ignore(); // Clear any newline characters from the buffer
                        getline(cin, name); // Use getline to read the entire name with spaces
			cout<<"Enter the id: ";
			cin>>id;
		}
		friend void displayDetails(Student s,Marksheet m);
};
class Marksheet
{
	private:
		int marks[5],i;
	public:
		void getMarks()
		{
		 cout<<"Marks:"<<endl;
		 for(i=0;i<=4;i++)
		 {
		  cout<<"Enter marks for "<<i+1<<" subject: ";
	      cin>>marks[i];
		 }
		}
		friend void displayDetails(Student s,Marksheet m);	
};
void displayDetails(Student s,Marksheet m)
{
	cout<<"Student Details"<<endl;
	cout<<"Name: "<<s.name<<endl;
	cout<<"ID: "<<s.id<<endl;
	
	int i=0;
	cout<<"Marks"<<endl;
	for(i=0;i<=4;i++)
	{
		cout<<"Subject "<<i+1<<" marks is "<<m.marks[i]<<endl;
	}
}
int main()
{
	Student s;
	Marksheet m;
	s.getDetails();
	m.getMarks();
	displayDetails(s,m);
	return 0;
}
