#include<iostream>
using namespace std;
int main()
{
int z[100];
int v[100]={-1};
int e[100];
int a,b,c,i,j,n,y,x,k,count=0;
cout<<endl<<" Enter Number of Responses=>";
cin>>n;
for(i=0;i<n;i++)
{
	cout<<endl<<"Enter Response=>";
	cin>>z[i];
}
for(i=0;i<n;i++)
{
	v[i]=-1;
	count++;
	c=0;
	b=z[i];
	x=0;
	for(k=0;k<i;k++)
	{
		if(b==z[k])
		{
		    c=1;
		    
		}
	}
	if(c==0)
	{
	  for(j=0;j<n;j++)
		{
		    if(b==z[j])
			{
				x++;
			}	
		}

	v[b-1]=x;
	  
	cout<<b<<" "<<x<<endl;
	}
	cout<<v[i]<<endl;
}
for(i=1;i<n;i++)
{
	if(v[i]!=0)
	{
	    cout<<endl<<i<<"  -  "<<v[i];
	}
}
return 0;	
}
