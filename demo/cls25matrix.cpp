#include<iostream>
#include<iomanip>
#define n 2
using namespace std;
class matrix
{
	protected:
		int i,j;
		int m[n][n];
	public:
		void setdata()
		{
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					cout<<" Enter Number->";
					cin>>m[i][j];
				}
			}
		}
		void printdata()
		{
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					cout<<m[i][j]<<" ";
				}
				cout<<endl;
			}
			
		}
		matrix operator+(matrix m2)
		{
			matrix m3;
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					m3.m[i][j]=m[i][j]+m2.m[i][j];
				}
			}
			return m3;
		}
};
main()
{
	
	matrix m1,m2,m3;
	m1.setdata();
	m2.setdata();
	m3=m1+m2;
	m3.printdata();
	
}
