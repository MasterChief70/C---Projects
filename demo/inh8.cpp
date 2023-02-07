#include<iostream>
using namespace std;
class student
{
	private:
		int sno;
		string name;
	public:
		student(int a,string b)
		{
			sno=a;
			name=b;	
		}	
		void printstudent()
		{
			cout<<endl<<"Roll no = "<<sno<<" Name = "<<name;
			cout<<endl;
		}
};
class marks:public student
{
	protected:
		double eng,hin	;
	public:
		marks(int a,string b,double c,double d):student(a,b)
		{
			eng=c;
			hin=d;
		}
		void printmarks()
		{
			cout<<endl<<" English Marks= "<<eng<<" Hindi Marks= "<<hin;
		}
};
class result:public marks
{
	public:
		result(int a,string b,double c,double d):marks(a,b,c,d)
		{
		}
		void printresult()
		{
			cout<<endl<<" Result = "<<eng+hin;
		}
};
main()
{
	
	result r1(1,"ram",22,33);
	r1.printstudent();
	r1.printmarks();
	r1.printresult();
}
