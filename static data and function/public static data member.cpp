#include<iostream>
using namespace std;

class test
{
    public:
         int p, t;
         static int r;
        
    public:
        
         void getdata()
        {
            cout << "Enter the value of p and t: ";
            cin >> p >> t;
        }
        void calculatedata()
        {
            int si;
            si = (p * t * r) / 100;
            cout << " " << si << endl; 
        }
};


int test::r = 8;

int main()
{
    test t[3];
    int i = 0;
    for(i = 0; i <= 2; i++)
    {
        cout << "Enter the detail of person " << i+1 << endl;
        t[i].getdata();
    }
    for(i = 0; i <= 2; i++)
    {
        cout << "SI of person " << i+1 << ": ";
        t[i].calculatedata();
    }
    
    return 0;
}

