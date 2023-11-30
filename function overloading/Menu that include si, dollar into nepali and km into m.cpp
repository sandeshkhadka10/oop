#include<iostream>
using namespace std;

int calculate(int d)
{
	return d*131;
}

float calculate(float c)
{
	return 1.8*c+32;
}

double calculate(double m)
{
	return m*1000;
}

int main()
{
	int d;
	float c;
	double m;
	
	char choice,x;
	cout<<"Menu"<<endl;
	cout<<"a.Dollar into Nepali"<<endl;
	cout<<"b.Celcius into fahrenheit"<<endl;
	cout<<"c.km into m"<<endl;
	cout<<"d.exit"<<endl;
	flag:
	cout<<"Enter the choice: ";
	cin>>choice;
	switch(choice)
	{
		case 'a':
			cout<<"Enter the dollar currency: ";
			cin>>d;
			cout<<d<<" "<<"dollar in nepali currency is "<<calculate(d)<<endl;
			break;
			
		case 'b':
			cout<<"Enter the temperature in celcius: ";
			cin>>c;
			cout<<c<<" "<<"Celcius in Fahrenheit is "<<calculate(c)<<endl;
			break;
			
		case 'c':
			cout<<"Enter the distance in m: ";
			cin>>m;
			cout<<m<<" "<<"Km in m is "<<calculate(m)<<endl;
			
		case 'd':
			cout<<"Press Y to exit and N to cancel";
			cin>>x;
			if (x=='Y')
			{
				exit(0);
			}
			else if(x=='N')
			{
				cout<<"Read the option clearly";
				goto flag;
			}
			else
			{
				cout<<"Please press Y or N";
				goto flag;
			}
			break;
			default:
				
				cout<<"Please enter from a to d: ";
				goto flag;
				break;
	}
	return 0;
}
