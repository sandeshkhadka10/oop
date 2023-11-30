#include<iostream>
using namespace std;

class Complexno
{
	private:
		int r;
		int i;

	public:
		void getdata()
		{
			cout << "Enter the value of real and imaginary number: ";
			cin >> r >> i;
		}

		Complexno operator+(Complexno c2)
		{
			Complexno temp;
			temp.r = r + c2.r;
			temp.i = i + c2.i;
			return temp;
		}

		void showdata()
		{
			cout << "Complexno: " << r << "+" << i << "i" << endl;
	}
};

int main()
{
	Complexno c1, c2, result;
	c1.getdata();
	c2.getdata();
	result = c1 + c2;
	result.showdata();
	return 0;
}

