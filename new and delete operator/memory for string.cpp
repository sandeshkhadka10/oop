#include <iostream>
#include <string>
using namespace std;

int main() {
	
    string* p;
    string name;

    cout << "Enter the name: ";
    getline(cin, name);

    p = new string;

    if (p == 0) 
	{
        cout << "Sorry! Memory could not be allocated.";
        exit(0);
    }

    *p = name;

    cout << "The dynamically allocated name is " << *p;

    delete p;

    return 0;
}

