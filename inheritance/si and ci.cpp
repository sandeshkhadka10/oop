#include<iostream>
#include<math.h>
using namespace std;

class Interest
{
private:
    float p;

protected:
    float r;

public:
    float t;

    void getdata()
    {
        cout << "Enter principal, rate, and time: ";
        cin >> p >> r >> t;
    }

    float getp()
    {
        return p;
    }

    float getr()
    {
        return r;
    }

    float gett()
    {
        return t;
    }
};

class SI : public Interest
{
public:
    void getdataSI()
    {
        getdata();
    }

    void calculatedataSI()
    {
        cout << "The Simple Interest is " << (getp() * gett() * getr()) / 100;
    }
};

class CI : public Interest
{
public:
    void getdataCI()
    {
        getdata();
    }

    void calculatedataCI()
    {
        cout << "The Compound Interest is " << (getp() * pow(1 + getr() / 100, gett())) - getp();
    }
};

int main()
{
    int op = 0;
    cout << "1. Simple Interest" << endl;
    cout << "2. Compound Interest" << endl;
    cout << "Enter the option: ";
    cin >> op;

    SI si;
    CI ci;

    if (op == 1)
    {
        si.getdataSI();
        si.calculatedataSI();
    }
    else if (op == 2)
    {
        ci.getdataCI();
        ci.calculatedataCI();
    }
    else
    {
        cout << "Invalid option";
    }

    return 0;
}

