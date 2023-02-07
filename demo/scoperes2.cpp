#include<iostream>
using namespace std;
class math
{
	private:
		int a,b;
	public:
		void setdata();
		void printdata();	
};
void math::setdata()
{
	a=20;
	b=25;
}
void math::printdata()
{
	cout<<endl<<" Add = "<<a+b;
}
main()
{
	math m1;
	m1.setdata();
	m1.printdata();
}
