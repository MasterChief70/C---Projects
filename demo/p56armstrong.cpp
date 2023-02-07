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
	rev=rev+rem*rem*rem;
	a=a/10;
}
cout<<endl<<" Reverse ="<<rev<<" Number ="<<a;
if(rev==x)
{
	cout<<endl<<" Number is an armstrong :)";
}
else
{
	cout<<endl<<" Number is not an armstrong :(";
}






return 0;
}
