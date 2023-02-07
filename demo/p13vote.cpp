#include<iostream>
using namespace std;
int main()
{
int a;
cout<<endl<<"Enter age=>";
cin>>a;
if(a>=18)
{
	cout<<endl<<"Eligible to vote";
}
else if(a<18)
{
	cout<<endl<<"Not eligible to vote";
}
return 0;
}
