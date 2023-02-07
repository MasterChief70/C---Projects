#include<iostream>
using namespace std;
int main()
{
int a,i,x,sp=0,cp=0,sn=0,cn=0;
int mp=0,mn=0;
cout<<endl<<"Enter Limitsss =>";
cin>>a;
for(i=1;i<=a;i++)
{
	cout<<"Enter Value ->";
	cin>>x;
	if(x>=0)
	{
		sp=sp+x;
		cp=cp+1;
		if(mp<x)
		{
			mp=x;
		}
	}
	else if(x<0)
	{
		sn=sn+x;
		cn=cn+1;
		if(mn>x)
		{
			mn=x;
		}
	}
}
cout<<endl<<"Sum of pos. no. ="<<sp;
cout<<endl<<"Sum of neg. no. ="<<sn;
cout<<endl<<"Count of pos. no. ="<<cp;
cout<<endl<<"Count of neg. no. ="<<cn;
cout<<endl<<"Avg. pos. no. ="<<sp/cp;
cout<<endl<<"Avg. neg. no. ="<<sn/cn;
cout<<endl<<"Max ="<<mp;
cout<<endl<<"Min ="<<mn;









return 0;
}
