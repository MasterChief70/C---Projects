#include<iostream>
using namespace std;

class math
{
	private:
		double a,b;
	public:
		math()
		{
			a=10;
			b=20;
		}
		math(double x,double y)
		{
			a=x;
			b=y;
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
	math m1,m2,m3(39,55),m4(46,99);
	m1.printdata();
	m2.printdata();
	m3.printdata();
	m4.printdata();
	
}
