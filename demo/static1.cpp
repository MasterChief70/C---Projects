#include<iostream>
using namespace std;
class student
{
	private:
		int no;
		string name;
		static int x;
	public:
		void setdata()
		{
			cout<<endl<<" Enter Name=>";
			cin>>name;
			cout<<endl<<" Enter No=>";
			cin>>no;
			x++;
		}	
		void printdata()
		{
			cout<<endl<<" name = "<<name<<" no = "<<no<<" x = "<<x;	
		}
};		
int student::x;
main()
{
	student s1,s2,s3;
	s1.setdata();
	s2.setdata();
	s3.setdata();
	s1.printdata();
	s2.printdata();
	s3.printdata();
}

