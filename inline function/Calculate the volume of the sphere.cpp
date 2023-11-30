#include<iostream>
using namespace std;

inline float calculateSphere(float r)
{
	return (4.0 / 3.0) * 3.14 * r * r * r; 
}
int main()
{
	float r=0;
	cout<<"Enter the radius of the sphere: ";
	cin>>r;
	cout<<"The volume of the sphere of the radius  "<<r<<" is "<<calculateSphere(r);
	return 0;
}
