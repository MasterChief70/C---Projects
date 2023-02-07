#include<string>
#include<iostream>
#include<sstream>
#include<cstdlib>
using namespace std;
int main()
{
string str = "Hello food, bar and world!";
string newstr = str.substr(12); // "bar and world!“
cout<<newstr;
string str1 = "Hello food, bar and world!";
string newstr1 = str1.substr(16, 3); // "and"
cout<<endl;
cout<<newstr1;
return 0;
}
