#include<iostream>
using namespace std;
int main()
{
int a,i;
cout<<endl<<"Enter limit=> ";
cin>>a;

for(i=1;i<=a;i++)
{
	cout<<endl<<i<<" - "<<i*i<<" - "<<i*i*i;
}


return 0;
}
