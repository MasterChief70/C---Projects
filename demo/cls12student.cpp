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
		void add(student s1, student s2)
		{ 
			name=s1.name+s2.name;
		}	
};
int main()
{
	student s1,s2,s3;
	s1.setdata();
	s2.setdata();
	s3.add(s1,s2);
	s3.printdata();
}
