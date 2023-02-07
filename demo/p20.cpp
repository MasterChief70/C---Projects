#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<endl<<"Enter 1 for add=>";
cout<<endl<<"Enter 2 for sub=>";
cout<<endl<<"Enter 3 for mul=>";
cout<<endl<<"Enter 4 for div=>";
cin>>a;
switch(a)
{
	case 1:
		cout<<endl<<"Input Numbers 1 & 2=>";
		cin>>b>>c;
		cout<<endl<<"Answer="<<b+c;
		break;
	case 2:
		cout<<endl<<"Input Numbers 1 & 2=>";
		cin>>b>>c;
		cout<<endl<<"Answer="<<b-c;
		break;
	case 3:
		cout<<endl<<"Input Numbers 1 & 2=>";
		cin>>b>>c;
		cout<<endl<<"Answer="<<b*c;
		break;
	case 4:
		cout<<endl<<"Input Numbers 1 & 2=>";
		cin>>b>>c;
		cout<<endl<<"Answer="<<b/c;
		break;
	default:
		cout<<endl<<"Invalid";
		
}

return 0;
}
