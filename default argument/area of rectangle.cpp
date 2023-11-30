#include<iostream>
using namespace std;

float area(float length=10,float width=20)
{
	return length*width;
}

int main()
{
	cout<<"The area of rectangle is "<<area();
	return 0;
}
