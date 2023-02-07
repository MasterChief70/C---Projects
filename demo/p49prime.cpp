#include<iostream>
using namespace std;
int main()
{
int a,b=0,c,i,x,n;
cout<<endl<<"Enter limit =>";
cin>>n;

for(int j=3;j<=n;j++)
{

a=j;
b=0;
for(i=2;i<a;i++)
{
	if(a%i==0)
	{
		b=1;
		break;
	}
}

if(b==0)
{
	cout<<endl<<a<<" prime";
}

}
	
return 0;
}
