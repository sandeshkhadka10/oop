#include<iostream>
using namespace std;

class A
{
private:
    float dollar;
protected:
    float cent;

public:
    void getamericancurrency()
    {
        cout << "Enter the currency in dollar and cent: ";
        cin >> dollar >> cent;
    }

    float getd()
    {
        return dollar;
    }
};

class B
{
private:
    float pound;
protected:
    float pence;

public:
    void getukcurrency()
    {
        cout << "Enter the currency in pound and pence: ";
        cin >> pound >> pence;
    }

    float getpo()
    {
        return pound;
    }
};

class C : public A, public B
{
public:
    float dollartonepali()
    {
        float temp = cent / 100 + getd();
        float dollar = 131 * temp;
        return dollar;
    }

    float poundtonepali()
    {
        float temp = pence / 100 + getpo();
        float pound = 168 * temp;
        return pound;
    }
};

int main()
{
    // Example usage:
    C obj;
    obj.getamericancurrency();
    obj.getukcurrency();

    float result1 = obj.dollartonepali();
    float result2 = obj.poundtonepali();

    float total = result1 + result2;

    cout << "Converted to Nepali currency (Dollar): " << result1 << " NPR\n";
    cout << "Converted to Nepali currency (Pound): " << result2 << " NPR\n";
    cout << "Total in Nepali currency: " << total << " NPR\n";

    return 0;
}

