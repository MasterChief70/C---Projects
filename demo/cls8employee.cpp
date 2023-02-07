#include<iostream>
using namespace std;

class employee
{
	private:
		int eno;
		string name;
		int salary;
	public:
		employee()
		{
			eno=88;
			salary=50000;
			name="ram";
		}
		employee(int a,int b,string c)
		{
			eno=a;
			salary=b;
			name=c;
		}
		void printdata()
		{
			cout<<endl<<"Eno = "<<eno<<" Name = "<<name<<" Salary = "<<salary;
		}
};

main()
{
	employee e1,e2(35,35000,"mohan"),e3(45,45000,"nayan"),e4(55,55000,"raghav");
	
	e1.printdata();
	e2.printdata();
	e3.printdata();
	e4.printdata();
}
