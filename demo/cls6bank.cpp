#include<iostream>
using namespace std;

class bank
{
	private:
		int ano;
		string name;
		double balance;
	public:
		void openaccount()
		{
			cout<<endl<<"Enter Account no =>";
			cin>>ano;
			cout<<endl<<"Enter Customer  name =>";
			cin>>name;
			cout<<endl<<"Enter balance =>";
			cin>>balance;
		}
		void deposit()
		{
			int damo;
			cout<<endl<<" Enter deposit Amount =>";
			cin>>damo;
			balance=balance+damo;
		}
		void withdraw()
		{
		    int damo;
			cout<<endl<<" Enter Withdraw Amount =>";
			cin>>damo;
			balance=balance-damo;
		}
		
		void printac()
		{
			cout<<endl<<"Account no = "<<ano<<" Customer Name = "<<name<<" Account Balance = "<<balance;
		}
};

main()
{
	int a;
	bank b1;
	b1.openaccount();
	b1.printac();
	b1.deposit();
	b1.printac();
	b1.withdraw();
	b1.printac();
	
}

