#include<iostream>
using namespace std;
class math
{
	private:
		int no1,no2;
	public:
		void setdata()
		{
			cout<<endl<<"This "<<this;
			cout<<endl<<" Enter Number 1=>";
			cin>>this->no1;
			cout<<endl<<" Enter Number 2=>";
			cin>>this->no2;
		}	
		void printdata()
		{
			cout<<endl<<"This = "<<this<<" number 1 = "<<this->no1<<" number 2 = "<<this->no2;
		}
};		
main()
{
	math m1,m2,m3,m4;
	m1.setdata();
	m2.setdata();
	m3.setdata();
	m4.setdata();
	m1.printdata();
	m2.printdata();
	m3.printdata();
	m4.printdata();
	
	
}

