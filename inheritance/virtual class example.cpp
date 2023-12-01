#include<iostream>
using namespace std;

class Person
{
protected:
    char name_emp[20];
    char name_stu[20];
    int age_emp;
    int age_stu;

public:
    void getemp()
    {
        cout << "Enter the name and age for employee: ";
        cin >> name_emp >> age_emp;
    }

    void getstu()
    {
        cout << "Enter the name and age for student: ";
        cin >> name_stu >> age_stu;
    }
};

class Employee : public virtual Person
{
protected:
    float salary;

public:
    void getempdata()
    {
        getemp();
        cout << "Enter the salary: ";
        cin >> salary;
    }
};

class Student : public virtual Person
{
protected:
    int id;

public:
    void getstudata()
    {
        getstu();
        cout << "Enter the id for student: ";
        cin >> id;
    }
};

class Details : public Employee, public Student
{
public:
    void showdata()
    {
        cout << "Employee Detail" << endl;
        cout << "Name:  " << name_emp <<endl;
        cout << "Age:   " << age_emp  <<endl;
        cout << "Salary: " << salary << endl;

        cout << "Student Detail" << endl;
        cout << "Name: " << name_stu << endl;
        cout << "Age: " << age_stu << endl;
        cout << "Student ID: " << id << endl;
    }
};

int main()
{
    Details D;
    D.getempdata();
    D.getstudata();

    D.showdata();

    return 0;
}

