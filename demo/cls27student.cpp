#include<iostream>
using namespace std;
class student
{
	private:
		string name;
	public:
		void setdata()
		{
			cout<<endl<<"Enter Name=>";
			cin>>name;
		}
		void printdata()
		{
			cout<<endl<<"Fullname = "<<name;
		}
		student operator>(student s2)
		{ 
			student s3;
			if(name>s2.name)
			{
				s3.name=name;
			}
			else if(s2.name>name)
			{
				s3.name=s2.name;
			}
			else
			{
				s3.name=name+s2.name;
			}
			return s3;
		}	
};
int main()
{
	student s1,s2,s3;
	s1.setdata();
	s2.setdata();
	s3=s1>s2;
	s3.printdata();
}
