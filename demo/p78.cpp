#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int a=20;
int &b=a;//& is used for reference variable
cout<<endl<<a<<setw(10)<<b;
a=100;
cout<<endl<<a<<setw(10)<<b;
b=200;
cout<<endl<<a<<setw(10)<<b;
a=50;
cout<<endl<<a<<setw(10)<<b;

return 0;
}
