#include<iostream>
using namespace std;
int main()
{
int a,i,s=0,c=0;
cout<<endl<<"Enter limit=> ";
cin>>a;

for(i=1;i<=a;i++)
{
	if(i%7==0)
	{
		cout<<endl<<i<<" is divisible by 7";
		s=s+i;
		c++;
	}
}

cout<<endl<<"Sum = "<<s<<" Count = "<<c;
return 0;
}
