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
		math add(math m2)
		{ 
		
		math m3;
			m3.a=a+m2.a;
			return m3;
		}	
};
int main()
{
	math m1,m2,m3;
	m1.setdata();
	m2.setdata();
	m3=m1.add(m2);
	m3.printdata();
}
