#include <iostream>
#include <math.h>
#include <string.h>
#define pi 3.14
using namespace std;
class Shape
{
private:
    float r, l, b, x, y, z;
    //static float pi;

public:
    void setvalue()
    {
        char name[10];
    label:
        cout << endl;
        cout << "enter the shape:";
        cin >> name;
        strlwr(name);
        if (strcmp(name, "circle") == 0)
        {
            cout << "enter the radius:";
            cin >> r;
            cout << "area of the circle is:" << (pi * r * r) << endl;
        }
        else if (strcmp(name, "rectangle") == 0)
        {
            cout << "enter the lenght and breadth:";
            cin >> l >> b;
            cout << "area of the rectangle is:" << (l * b) << endl;
        }
        else if (strcmp(name, "triangle") == 0)
        {
            cout << "enter the three sides:";
            cin >> x >> y >> z;
            float s = (x + y + z) / 2;
            float area, w;
            w = s * (s - x) * (s - y) * (s - z);
            cout << w;
            area = pow(w, 0.5);
            cout << "area of the triangle is:" << area << endl;
        }
        else
        {
            cout << "please enter valid shape(circle/rectangle/triangle)." << endl;
            goto label;
        }
    }
};
//float Shape ::pi = 3.14;
int main()
{
	Shape *s;
    int n, i;
    cout << "how many shapes(circle/rectangle/triangle):";
    cin >> n;
    s=new Shape[n];
    for (i = 0; i < n; i++)
    {
        s[i].setvalue();
    }
    return 0;
}
