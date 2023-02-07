#include<string>
#include<iostream>
#include<sstream>
#include<cstdlib>
using namespace std;
int main()
{
// Define string
string str = "Hello foo, bar and world!";

str.replace(6, 3, "bar"); //"Hello bar, bar and world!"
cout<<endl<<str;
string str1 = "Hello foo, bar and world!";
str1.replace(str1.begin() + 6, str1.end(), "nobody!"); //"Hello nobody!"
cout<<endl<<str1;
string str2 = "Hello foo, bar and world!";
string alternate = "Hello foobar";
str2.replace(19, 5, alternate, 6, 6); //"Hello foo, bar and foobar!"
cout<<endl<<str2;
return 0;
}
