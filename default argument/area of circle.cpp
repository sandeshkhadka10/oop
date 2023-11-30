#include<iostream>
using namespace std;

float circle(float radius=10)
{
	return 3.14*radius*radius;
}
int main()
{
	cout<<"The area of circle is "<<circle();
	return 0;
}
