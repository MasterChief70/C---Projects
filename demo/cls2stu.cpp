#include<iostream>
using namespace std;

class student
{
	private:
		int sno;
		string name;
		double english,hindi;
	public:
		void setdata()
		{
			cout<<endl<<"Enter roll no =>";
			cin>>sno;
			cout<<endl<<"Enter name =>";
			cin>>name;
			cout<<endl<<"Enter marks for english =>";
			cin>>english;
			cout<<endl<<"Enter marks for hindi =>";
			cin>>hindi;
		}
		void printdata()
		{
			cout<<endl<<"Roll no = "<<sno<<" Name = "<<name<<" English Marks= "<<english<<" Hindi Marks= "<<hindi;
		}
};

main()
{
	student s1,s2,s3,s4;
	s1.setdata();
	s2.setdata();
	s3.setdata();
	s4.setdata();
	
	
	s1.printdata();
	s2.printdata();
	s3.printdata();
	s4.printdata();
}
