#include<iostream>
using namespace std;
class student
{
	protected:
		int rno;
		string name;
	public:
	void setdata()
	{
		cout<<endl<<" Enter Roll Number =>";
		cin>>rno;
		cout<<endl<<" Enter Name =>";
		cin>>name;
	}
	void printdata()
	{
		cout<<" Name = "<<name<<" Roll Number = "<<rno;	
	}
};
class marks:public student
{
	protected:
		double eng,hin;
	public:
	void setdata()
	{
		student::setdata();
		cout<<endl<<" Enter English Marks =>";
		cin>>eng;
		cout<<endl<<" Enter Hindi Marks =>";
		cin>>hin;
	}
	void printdata()
	{
		student::printdata();
		cout<<endl<<" English marks = "<<eng<<" Hindi Marks = "<<hin;	
	}
};
class result:public marks
{
	public:
	void printdata()
	{
		marks::printdata();
		cout<<endl<<" Result = "<<eng+hin;	
	}
};
main()
{
	result r1;
	r1.setdata();
	r1.printdata();
}

