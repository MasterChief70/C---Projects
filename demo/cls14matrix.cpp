#include<iostream>
#include<iomanip>
#define n 3
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
		void add(matrix m1, matrix m2)
		{
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					m[i][j]=m1.m[i][j]+m2.m[i][j];
				}
			}
		}
};
main()
{
	
	matrix m1,m2,m3;
	m1.setdata();
	m2.setdata();
	m3.add(m1,m2);
	m3.printdata();
	
}
