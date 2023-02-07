#include<iostream>
using namespace std;

void printdata(char a,int b)
{
	if(b==0)
	{
		for(int i=1;i<=20;i++)
	    {
		    cout<<a<<" "<<i<<" ";
	    }
	}
	else
	{
	    for(int i=1;i<=b;i++)
	    {
		    cout<<a<<" "<<i<<" ";
	    }
	}
}
int main()
{
	int b;
	char a;
	cout<<endl<<"Enter numbers =>";
	cin>>a;
	cout<<endl<<"Enter numbers =>";
	cin>>b;
	printdata(a,b);
}
