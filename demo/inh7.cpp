#include<iostream>
using namespace std;
class student
{
	private:
		int sno;
		string name;
	public:
		student()
		{
			sno=5;
			name="ram";	
			cout<<endl<<" in stu cons";
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
		marks()
		{
			eng=22;
			hin=33;
			
			cout<<endl<<" in marks cons";
		}
		void printmarks()
		{
			cout<<endl<<" English Marks= "<<eng<<" Hindi Marks= "<<hin;
		}
};
class result:public marks
{

	public:
		result()
		{
			cout<<endl<<" in result cons";			
		}
		void printresult()
		{
			cout<<endl<<" Result = "<<eng+hin;
		}
};
main()
{
	result r1;
	r1.printstudent();
	r1.printmarks();
	r1.printresult();
}
