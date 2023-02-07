#include<iostream>
using namespace std;

class student
{
	private:
		string name,rno;
	public:
	void setstudent()
	{
		cout<<endl<<" Enter Name=>";
		cin>>name;
		cout<<endl<<" Enter Roll Number=>";
		cin>>rno;
	}	
	void printstudent()
	{
		cout<<endl<<" Name = "<<name<<" Roll Number = "<<rno;
		cout<<endl;
	}
};
class marks:public student
{
	protected:
		double eng,hin;
	public:
	void setmarks()
	{
		cout<<endl<<" Enter Marks for English =>";
		cin>>eng;
		cout<<endl<<" Enter Marks for Hindi =>";
		cin>>hin;
	}
	void printmarks()
	{
		cout<<endl<<" English Marks= "<<eng<<" Hindi Marks= "<<hin;
		cout<<endl;
	}
};
class result:public marks
{
	
	public:
	void printresult()
	{
		cout<<endl<<" Total Marks = "<<eng+hin;
		cout<<endl;
	}
};
main()
{
	result r1;
	r1.setstudent();
	r1.setmarks();
	r1.printstudent();
	r1.printmarks();
	r1.printresult();

}
