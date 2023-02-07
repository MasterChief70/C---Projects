#include<iostream>
using namespace std;
int main()
{
double a,b,i,speed;
cout<<endl<<"Enter Min temp=>";
cin>>a;
cout<<endl<<"Enter Max temp=>";
cin>>b;
for(i=a;i<=b;i++)
{
	cout<<endl<<"Speed of sound in "<<i<<" degree celsius = "<<331.30+0.61*i<<"m/s";
}







return 0;
}
