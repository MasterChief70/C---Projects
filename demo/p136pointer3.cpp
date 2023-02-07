#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int *pa,*pb;
	pa=&a;
	pb=&b;
	cout<<endl<<"Enter Number 1 and Number 2=>";
	cin>>*pa>>*pb;
	cout<<endl<<" Add = "<<*pa+*pb;
	cout<<endl<<" Sub = "<<*pa-*pb;
	cout<<endl<<" Mul = "<<*pa**pb;
	cout<<endl<<" Div = "<<*pa/(*pb);
}
