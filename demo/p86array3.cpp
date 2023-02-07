#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int n,i,s=0,x=0,c=0,v=0;
	
		cout<<endl<<"enter limit =>";
		cin>>n;
	
		for(i=0;i<n;i++)
		{
			cout<<endl<<"enter number of "<<"a["<<i<<"] =>";
			cin>>a[i];
		}
		
		for(i=0;i<n;i++)
		{
			if(a[i]<0)
			{
			    cout<<endl<<a[i]<<" is Negative";
				s=s+a[i];
				v=v+1;
			}
			else 
			{
				cout<<endl<<a[i]<<" is Positive";
			    x=x+a[i];
			    c=c+1;
			}
			
			
		}
		cout<<endl<<" Sum of positive numbers = "<<x<<" Count of positive numbers = "<<c;
	    cout<<endl<<" Sum of negative numbers = "<<s<<" Count of negative numbers = "<<v;
		
		
		
		
		
	return 0;
}
