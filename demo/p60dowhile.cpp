#include<iostream>
using namespace std;
int main()
{
int a,b,i;
cout<<endl<<"Enter Limit =>";
cin>>a;
i=1;
do
{
	cout<<endl<<i<<" - "<<i*i;
	i++,i;
}while(i<=a);







return 0;
}
