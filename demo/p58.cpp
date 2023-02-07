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
	rev=rev+rem;
	a=a/10;
}
cout<<endl<<" Sum of Digits ="<<rev<<" Number ="<<a;






return 0;
}
