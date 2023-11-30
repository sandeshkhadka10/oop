#include<iostream>
#include<string>
using namespace std;

class MyClass 
{
   private:
   	string name;
   public:
    void initialize(string n) 
	{
        name = n;
        cout << "MyClass object initialized with name: " << name << endl;
    }

    void cleanup() 
	{
        cout << "Cleaning up MyClass object with name: " << name << endl;
    }

    void displayname() 
	{
        cout << "The name is " << name << endl;
    }
};

int main() 
{
    string name;
    cout << "Enter the name: ";
    getline(cin, name);
   

    // Create an object of MyClass on the heap using new
    MyClass* obj = new MyClass;

    // Initialize the object
    obj->initialize(name);

    // Check if memory allocation was successful
    if (obj != 0) 
	{
        // Use the object
        obj->displayname();

        // Cleanup and deallocate the memory
        obj->cleanup();
        delete obj; // Deallocate the memory
        obj = 0; // Optional: Set the pointer to nullptr after deleting

        // Check if deallocation was successful
        if (obj == 0) 
		{
            cout << "Memory deallocated successfully." << endl;
        } else 
		{
            cout << "Memory deallocation failed." << endl;
        }
    } 
	else 
	{
        cout << "Memory allocation failed." << endl;
    }

    return 0;
}

