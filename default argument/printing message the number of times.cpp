#include <iostream>
#include <string>
using namespace std;

void printMessage(string message = "Sandesh Khadka", int n = 2) 
{
    for (int i = 0; i < n; i++) 
    {
        cout << message << endl;
    }
}

int main() 
{
    printMessage();
    return 0;
}

