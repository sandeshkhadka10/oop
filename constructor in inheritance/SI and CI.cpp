#include <iostream>
#include <math.h> //
using namespace std;

class CI
{
protected:
    float p, t, r;

public:
    CI()
    {
    }
    CI(float p, float t, float r)
    {
        this->p = p;
        this->t = t;
        this->r = r;
    }
    void showCI()
    {
        cout << "CI= " << p * pow((1 + r / 100), t) - p << endl;
    }
};

class SI : public CI
{
public:
    SI(float p, float t, float r) : CI(p, t, r)
    {
    	this->p=p;
		this->t=t;
		this->r=r;
    }
    void showSI()
    {
        cout << "SI= " << (p * t * r) / 100;
    }
};

int main()
{
    SI obj(10, 2, 5);
    obj.showCI();
    obj.showSI();
    return 0;
}

