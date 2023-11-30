#include <iostream>
#include <string>
using namespace std;

class Student 
{
private:
    int age;
    string name;

public:
    void getdata(int a, string n) 
    {
       age = a;
       name = n;
    }
    int getAge()
    {
        return age;
    }
    string getName()
    {
        return name;
    }
};

int main() 
{
    Student* s, temp;
    int i = 0, j = 0, n = 0;
    cout << "Enter the number of students you want to add: ";
    cin >> n;
    s = new Student[n];
    cout << "Enter the name and age of the students: " << endl;
    for (i = 0; i <= n - 1; i++) 
    {
        int age;
        string name;
        cout << "Enter the age of " << i + 1 << " student: ";
        cin >> age;
        cout << "Enter the name of " << i + 1 << " student: ";
        cin.ignore();
        getline(cin, name);
        s[i].getdata(age, name);
    }

    for (i = 0; i < n; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (s[i].getAge() > s[j].getAge()) 
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    cout << "The persons in ascending order of age are: " << endl;
    for (i = 0; i <= n - 1; i++) 
    {
        cout << "Name= " << s[i].getName() << endl;
        cout << "Age= " << s[i].getAge() << endl;
    }

    delete[] s;

    return 0;
}

