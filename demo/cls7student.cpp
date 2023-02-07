#include<iostream>
#include<string.h>
using namespace std;

class student
{
	private:
		int sno;
		string name;
		double eng,hin;
	public:

		student()
		{
			sno=5;
			eng=22;
			hin=33;
			name="ram";	
		}	
		
		student(int a,int b,int c,string d)
		{
			sno=a;
			eng=b;
			hin=c;
			name=d;	
		}	
		
		void printdata()
		{
			cout<<endl<<"Roll no = "<<sno<<" Name = "<<name<<" English Marks= "<<eng<<" Hindi Marks= "<<hin;
			cout<<endl;
		}
};

main()
{
	student s1,s2(69,99,99,"mann"),s3(11,22,33,"nayan"),s4(2,4,5,"mohan");

	
	s1.printdata();
	s2.printdata();
	s3.printdata();
	s4.printdata();
}
