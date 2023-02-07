#include<iostream>
using namespace std;
int main()
{
int rev=0,rem=0,a,b,x;
cout<<endl<<"Enter Numbers =>";
cin>>a;
x=a;
while(a>0)
{
	rem=a%10;
	rev=rev*10+rem;
	a=a/10;
}
cout<<endl<<" Reverse ="<<rev<<" Number ="<<a;
if(rev==x)
{
	cout<<endl<<" Number is a pellindrome :)";
}
else
{
	cout<<endl<<" Number is not a pellindrome :(";
}






return 0;
}
