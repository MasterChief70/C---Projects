#include<string>
#include<iostream>
#include<sstream>
#include<cstdlib>
using namespace std;
int main()
{
int x=10;
string str=to_string(x);
cout<<endl<<str;
string to_string(long value);
string to_string(long long value);
string to_string(unsigned int value);
string to_string(unsigned long value);
string to_string(unsigned long long value);
string to_string(float value);
string to_string(double value);
string to_string(long double value);
return 0;
}
