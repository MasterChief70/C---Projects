#include<iostream>
using namespace std;

class emp
{
	private:
		int eno;
		string name;
		int salary;
	public:
		void setdata()
		{
			cout<<endl<<"Enter eno =>";
			cin>>eno;
			cout<<endl<<"Enter name =>";
			cin>>name;
			cout<<endl<<"Enter salary =>";
			cin>>salary;
		}
		void printdata()
		{
			cout<<endl<<"Eno = "<<eno<<" Name = "<<name<<" Salary = "<<salary;
		}
};

main()
{
	emp e1,e2,e3,e4;
	e1.setdata();
	e2.setdata();
	e3.setdata();
	e4.setdata();
	
	
	e1.printdata();
	e2.printdata();
	e3.printdata();
	e4.printdata();
}
