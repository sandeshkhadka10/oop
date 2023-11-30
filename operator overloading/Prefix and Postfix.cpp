#include<iostream>
using namespace std;

class Complexno
{
    private:
        int r;
        int i;

    public:
        Complexno()
        {
            r = 2;
            i = 3;
        }

        // Prefix increment operator overloading
        void operator ++ () //prefix
        {
            r += 5;
            i += 5;
        }

        // Postfix increment operator overloading
        void operator ++ (int) //postfix
        {
            r += 5;
            i += 5;
        }

        void showdata()
        {
            cout << "Complex no " << r << "+" << i << "i" << endl;
        }
};

int main()
{
    Complexno c1, c2, c3;
    cout << "The original data is " << endl;
    c1.showdata();

    // Prefix increment
    ++c2;
    cout << "After Prefix Increment: " << endl;
    c2.showdata();

    // Postfix increment
    c3++;
    cout << "After Postfix Increment: " << endl;
    c3.showdata();

    return 0;
}

