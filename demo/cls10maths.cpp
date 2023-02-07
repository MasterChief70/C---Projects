#include<iostream>
using namespace std;
class math
{
	private:
		int a,b;
	public:
		void setdata()
		{
			cout<<endl<<"Enter Nuumber 1=>";
			cin>>a;
		}
		void printdata()
		{
			cout<<endl<<"Add = "<<a;
		}
		void add(math m1,math m2)
		{ 
		
			a=m1.a+m2.a;
		
		}	
};
int main()
{
	math m1,m2,m3;
	m1.setdata();
	m2.setdata();
	m3.add(m1,m2);
	m3.printdata();
}
