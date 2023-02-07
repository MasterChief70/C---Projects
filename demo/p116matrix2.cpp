#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
int n=3;
int m[n][n];
int i,j;
cout<<endl<<" Enter Limit=>";
cin>>n;
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		cout<<" Enter Number->";
		cin>>m[i][j];
	}
}
for(j=0;j<n;j++)
{
	for(i=0;i<n;i++)
	{
		cout<<m[i][j]<<" ";
	}
	cout<<endl;
}


return 0;
}
