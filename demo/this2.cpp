#include<iostream>
using namespace std;
class math
{
	private:
		int no1,no2;
	public:
		math(int a,int b)
		{
			this->no1=a;
			this->no2=b;
		}
		void printdata()
		{
			cout<<endl<<"This = "<<this<<" number 1 = "<<this->no1<<" number 2 = "<<this->no2;
		}
};		
main()
{
	math m1(10,20),m2(25,35),m3(50,60),m4(100,200);
	m1.printdata();
	m2.printdata();
	m3.printdata();
	m4.printdata();
	
	
}

