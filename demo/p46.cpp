#include<iostream>
#include<math.h>
using namespace std;
int main()
{
double a,b,c,d,r,f,i;
cout<<endl<<"Enter Number =>";
cin>>a;
b=a/2;

for(i=1;i<=100;i++)
{
	r=a/b;
	b=(b+r)/2;
}
cout<<endl<<"Answer ="<<b;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
return 0;
}
