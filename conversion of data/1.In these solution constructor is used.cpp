#include<iostream>
using namespace std;
class Time 
{
  private:
    int sec;
    int hr;
    int min;
  public:
    void getdata() 
	{
        cout << "Enter the value of seconds: ";
        cin >> sec;
        convertsec(); // Call the conversion function after getting new seconds
    }
    Time(int sec = 0) 
	{
        this->sec=sec;
    }
    void convertsec() 
	{
        hr = sec / 3600;
        min = (sec % 3600) / 60;
        sec = sec % 60;
    }
    void showdata() 
	{
        cout << "Time: " << hr << " hours, " << min << " minutes, " << sec << " seconds\n";
    }
};
int main() 
{
    Time T;
    T.getdata();
    T.showdata();
    return 0;
}

