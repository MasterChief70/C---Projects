#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
string s,x,y; // Constructor involving C-String
cout<<endl<<"Enter Something=>";
getline(cin, s);
cout<<endl<<" Enter new insert=>";
getline(cin, x);
cout<<endl<<" Enter search item=>";
getline(cin, y);
int len = atoi(s.length()); // returns , the string length
s.insert(2, x); // s is now "12xy3"
s.erase(2, 5); // s is now "123"
pos = s.find(y); // returns position 1
cout<<endl<<s;
cout<<endl<<len;
cout<<endl<<pos;
}
