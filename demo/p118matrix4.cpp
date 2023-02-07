#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
int n=3;
int m[n][n];
int i,j;
cout<<endl<<" Enter Limit=>";
cin>>n;
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		cout<<" Enter Number->";
		cin>>m[i][j];
	}
}
cout<<endl<<" Original Matrix --";
cout<<endl;
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		cout<<m[i][j]<<" ";
	}
	cout<<endl;
}

for (int i=0;i<n/2;i++) 
  { 
    for (int j=i;j<n-i-1;j++) 
    { 
        // Swapping elements after each iteration in Clockwise direction
            int x=m[i][j]; 
            m[i][j]=m[n-1-j][i]; 
            m[n-1-j][i]=m[n-1-i][n-1-j]; 
            m[n-1-i][n-1-j]=m[j][n-1-i]; 
            m[j][n-1-i]=x; 
    } 
  }
cout<<endl<<"90 degree Rotated Matrix --";
cout<<endl;
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		cout<<m[i][j]<<" ";
	}
	cout<<endl;
}


return 0;
}
