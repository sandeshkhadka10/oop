#include<iostream>
using namespace std;
class BankAccount
{
	private:
		float balance,initalbalance;
	public:
		void getinitalbalance()
		{
			cout<<"Enter the inital balance: Rs ";
			cin>>initalbalance;
			if(initalbalance<=0)
			{
				cout<<"Your actual balance is Rs  "<<initalbalance<<endl;//if user enters 0 then his/her balance becomes 0
			}
			else
			{
				balance=initalbalance;
				cout<<"You actual balance is Rs  "<<balance<<endl;
			}
		}
		
		friend void withdraw(BankAccount account);
};
void withdraw(BankAccount account)
{
	float withdrawamount=0;
	cout<<"Enter the amount you want to withdraw: Rs ";
	cin>>withdrawamount;
	if(withdrawamount<=0)
	{
		cout<<"Money can't be withdraw";
	}
	if(withdrawamount>account.balance)
	{
        cout<<"Insufficeint Balance. So money can't be withdraw.";
	}
	else
	{
		account.balance=account.balance-withdrawamount;
		cout<<"The withdraw amount is Rs "<<withdrawamount<<endl;
		cout<<"The remaining amount is Rs  "<<account.balance<<endl;
	}
}
int main()
{
	BankAccount account;
	account.getinitalbalance();
	withdraw(account);
	return 0;
}
