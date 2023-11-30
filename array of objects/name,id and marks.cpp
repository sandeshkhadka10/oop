#include<iostream>
#include<string>
using namespace std;
class Student
{
	private:
		int id;
		string name;
		float marks;
		public:
			void getdata(int i,string n, float m)
			{
				id=i;
				name=n;
				marks=m;
			}
	        int getId()
            {
              return id;
            }
           string getName()
           {
             return name;
           }
           float getMarks()
            {
              return marks;
            }  
};
int main()
{
	Student *s;
	int i=0,n=0;
	cout<<"Enter the no of students you want to add: ";
	cin>>n;
	s=new Student[n];
	cout<<"Enter the id,name and marks of the students: "<<endl;
	for(i=0;i<=n-1;i++)
	{
	    int id;
        string name;
        float marks;
        cout << "Enter the id of " << i + 1 << " student: ";
        cin >> id;
        cout << "Enter the name of " << i + 1 << " student: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter the marks of " << i + 1 << " student: ";
        cin >> marks;
        s[i].getdata(id, name, marks);
	}
	cout<<"The details of the students are: "<<endl;
	for(i=0;i<=n-1;i++)
	{
		cout << "Id= " << s[i].getId() << endl;
		cout << "Name= " << s[i].getName() << endl;
        cout << "Marks= " << s[i].getMarks() << endl;
	}
	return 0;
}
