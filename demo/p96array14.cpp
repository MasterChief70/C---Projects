#include<iostream>
using namespace std;
int main()
{
int a[100];
int b[100];
int i,x=0,m,n,s,j;

cout<<endl<<" Enter Limit for A=>";
cin>>n;
for(i=0;i<n;i++)
{
	cout<<endl<<"enter number of "<<"a["<<i<<"] =>";
	cin>>a[i];
}
for(i=0;i<n;i++)
{
	s=a[i];
	m=0;
    for(j=2;j<s;j++)
    {
    	if(s%j==0)
    	{
    		m=1;
    		break;
		}
	}
	if(m==0)
	{
		b[x]=s;
		x++;
	}
	
}
for(i=0;i<x;i++)
{
	cout<<b[i]<<" ";
}	

return 0;
}
