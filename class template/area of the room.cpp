#include<iostream>
using namespace std;
template <class t>
class room
{
	private:
		t l,b;
	public:
		void calculate(t l, t b)
		{
			this->l=l;
			this->b=b;
			cout<<"Area= "<<l*b<<endl;
		}
};
int main()
{
	room <int> r1;
	r1.calculate(10,5);
	room <float> r2;
	r2.calculate(10.5,5.5);
	return 0;
}
