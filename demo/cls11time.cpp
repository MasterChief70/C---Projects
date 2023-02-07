#include<iostream>
using namespace std;
class time
{
	private:
		int h,m;
	public:
		void setdata()
		{
			cout<<endl<<"Enter Hours=>";
			cin>>h;
			cout<<endl<<"Enter minutes=>";
			cin>>m;
		}
		void printdata()
		{
			cout<<endl<<"Add = "<<h<<" "<<m;
		}
		void add(time t1,time t2)
		{
			h=t1.h+t2.h;
			m=t1.m+t2.m;
			int x;
			if(m>=60)
			{
				if(m%60==0||m%60!=0)
				{
					x=m/60;
					h=h+x;
					m=m-(60*x);
				}
				/*else if(m%60!=0)
				{
					x=m/60;
					h=h+x;
					m=m-(60*x);
				}
				else
				{				
					h=h+1;
					m=m-60;
				}*/
			}
		}
};
main()
{
	time t1,t2,t3;
	t1.setdata();
	t2.setdata();
	t3.add(t1,t2);
	t3.printdata();
}
