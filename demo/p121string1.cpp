#include<iostream>
#include<string>
using namespace std;
main()
{

string name;
cout<<" What is your name?";
getline(cin, name);
cout<<endl<<name;
while (cin.eof() == false)
{
getline(cin, name);
cout << name << endl;
} 

return 0;
}
