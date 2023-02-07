#include<iostream>
using namespace std;
int main()
{
int a,b,c,d,e;
cout<<endl<<"Enter Amount of fuel=>";
cin>>a;
cout<<endl<<"Enter Fuel consumption kmpl=>";
cin>>b;
cout<<endl<<"Enter Fuel price=>";
cin>>c;

cout<<endl<<"Going 100km costs you:"<<c*c/b;
cout<<endl<<"You can go "<<a*b<<" kilometers with your tank";

return 0;
}
