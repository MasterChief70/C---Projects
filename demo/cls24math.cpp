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
		
		maths operator+(int x)
		{
			maths m3;
	
			m3.a=a+x;
			m3.b=b+x;
			m3.c=c+x;
			m3.d=d+x;
			return m3;
		}
		
};
int main()
{
	maths m1,m2,m3;
	m1.setdata();
	m1.printdata();
	m2.printdata();
	m3=m1+20;
	
	//m3 = m1.operator+(m2) ;
	
	m3.printdata();
}
