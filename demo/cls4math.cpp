#include<iostream>
using namespace std;

class math
{
	private:
		double a,b;
	public:
		void setdata()
		{
			cout<<endl<<"Enter a =>";
			cin>>a;
			cout<<endl<<"Enter b =>";
			cin>>b;
		}
		void printdata()
		{
			cout<<endl<<"Integer 1= "<<a<<" Integer 2= "<<b;
		}
		void Add()
		{
			cout<<endl<<"Add = "<<a+b;
		}
		void Sub()
		{
			cout<<endl<<"Sub = "<<a-b;
		}
		void Mul()
		{
			cout<<endl<<"Mul = "<<a*b;
		}
		void Div()
		{
			cout<<endl<<"Div = "<<a/b;
		}
};

main()
{
	math m1;
	m1.setdata();
	m1.printdata();
	m1.Add();
	m1.Sub();
	m1.Mul();
	m1.Div();
}
