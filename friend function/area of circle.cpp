#include<iostream>
using namespace std;

class Circle
{
	private:
		float r;
	public:
		void getr()
		{
			cout<<"Enter the radius of the circle: ";
			cin>>r;
		}
	    friend void calculateArea(Circle); 
};
void calculateArea(Circle c)
{
  float area=0;
  area=3.14*c.r*c.r;
  cout<<"Area of the circle is "<<area;	
}
int main()
{
	Circle c;
	c.getr();
	calculateArea(c);
	return 0;
}
