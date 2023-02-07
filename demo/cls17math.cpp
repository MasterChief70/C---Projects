#include<iostream>
using namespace std;
class maths
{
	private:
		int a,b,c,d;
	public:
		void setdata()
		{
			cout<<endl<<" Enter 4 Numbers=>";
			cin>>a>>b>>c>>d;
		}
		void printdata()
		{
			cout<<endl<<"A= "<<a<<" B= "<<b<<" C= "<<c<<" D= "<<d;
		}
		
		void operator-()
		{
			a=-a;
			b=-b;
			c=-c;
			d=-d;
		}		
};
int main()
{
	maths m1;
	m1.setdata();
	m1.printdata();
	-m1;
	m1.printdata();
}
