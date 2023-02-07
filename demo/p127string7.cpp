#include<iostream>
#include<string>
#include<sstream>
#include<cstdlib>
using namespace std;
int main()
{
string ten="10";
double num1 = atof(ten.c_str());
int num2 = atoi(ten.c_str());
long num3 = atol(ten.c_str());


cout<<endl<<num1<<num2<<num3;

return 0;
}
