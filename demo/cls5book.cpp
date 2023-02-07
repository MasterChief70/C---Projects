#include<iostream>
using namespace std;

class book
{
	private:
		int bid;
		string name;
		int price;
	public:
		void setdata()
		{
			cout<<endl<<"Enter book id =>";
			cin>>bid;
			cout<<endl<<"Enter book name =>";
			cin>>name;
			cout<<endl<<"Enter price =>";
			cin>>price;
		}
		void printdata()
		{
			cout<<endl<<"Book Id = "<<bid<<" Book Name = "<<name<<" Price = "<<price;
		}
};

main()
{
	book b1,b2,b3,b4;
	b1.setdata();
	b2.setdata();
	b3.setdata();
	b4.setdata();
	
	
	b1.printdata();
	b2.printdata();
	b3.printdata();
	b4.printdata();
}
