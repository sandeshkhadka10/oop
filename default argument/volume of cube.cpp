#include<iostream>
using namespace std;

float volume(float length=10)
{
	return length*length*length;
}
int main()
{
	cout<<"The volume of the cube is "<<volume()<<endl;
	return 0;
}
