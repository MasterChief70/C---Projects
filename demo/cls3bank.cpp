#include<iostream>
using namespace std;

class bank
{
	private:
		int ano;
		string name;
		double balance;
	public:
		void setdata()
		{
			cout<<endl<<"Enter Account no =>";
			cin>>ano;
			cout<<endl<<"Enter Customer  name =>";
			cin>>name;
			cout<<endl<<"Enter balance =>";
			cin>>balance;
		}
		void printdata()
		{
			cout<<endl<<"Account no = "<<ano<<" Customer Name = "<<name<<" Account Balance = "<<balance;
		}
};

main()
{
	bank a1,a2,a3,a4;
	a1.setdata();
	a2.setdata();
	a3.setdata();
	a4.setdata();
	
	
	a1.printdata();
	a2.printdata();
	a3.printdata();
	a4.printdata();
}
