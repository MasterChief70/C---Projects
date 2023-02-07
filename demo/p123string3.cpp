#include<iostream>
#include<string>
using namespace std;
int main(void)
{
string s1;
string s2;
cout<<endl<<" Enter S1=>";
getline(cin, s1);
cout<<endl<<" Enter S2=>";
getline(cin, s2);
if (s1 != s2)
cout << s1 << " is not equal to " << s2 << endl;
if (s1 > s2)
cout << s1 << " is greater than " << s2 << endl;
else
cout << s2 << " is greater than " << s1 << endl;
}
