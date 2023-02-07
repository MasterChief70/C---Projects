#include<iostream>
using namespace std;
class time
{
	private:
		int h,m,s;
	public:
		time()
		{
			h=0;
			m=0;
			s=0;
		}
		time(int h1,int m1,int s1)
		{
			h=h1;
			m=m1;
			s=s1;
		}
		void printdata()
		{
			cout<<endl<<"Add = "<<h<<" "<<m<<" "<<s;
		}
		time operator+(time t2)
		{
			time t3;
				t3.h=h+t2.h;
				t3.m=m+t2.m;
				t3.s=s+t3.s;
				int x,y;
				if(t3.m>=60)
				{
					x=t3.m/60;
					t3.h=t3.h+x;
					t3.m=t3.m-(60*x);
					if(t3.s>=60)
					{
						y=t3.s/60;
						t3.m=t3.m+y;
						t3.s=t3.s-(60*y);
					}
				}
				
				return t3;
		}
};
main()
{
	time t1(10,100,100),t2(10,100,100),t3;
	t3=t1 + t2;
	t3.printdata();
}
