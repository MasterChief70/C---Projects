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
		
		maths operator+(maths m2)
		{
			maths m3;
			
			m3.a=a+m2.a;
			m3.b=b+m2.b;
			m3.c=c+m2.c;
			m3.d=d+m2.d;
			return m3;
		}
		
};
int main()
{
	maths m1,m2,m3;
	m1.setdata();
	m2.setdata();
	m1.printdata();
	m2.printdata();
	m3=m1+m2;
	
	//m3 = m1.operator+(m2) ;
	
	m3.printdata();
}
