#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
int n=3;
int m[n][n],x[n][n];
int i,j;
cout<<endl<<" Enter Limit=>";
cin>>n;
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		cout<<" Enter Number for m->";
		cin>>m[i][j];
	}
}
cout<<endl;
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		cout<<" Enter Number for x->";
		cin>>x[i][j];
	}
}
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		cout<<m[i][j]+x[i][j]<<" ";
	}
	cout<<endl;
}


return 0;
}
