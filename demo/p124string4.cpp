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
if (s1.compare("mann") == 0)
cout << s1 << " matches " << s1 << endl;
else
cout << "Strings didn't match ";
if ((s2.compare(s1)) == 0)
cout <<endl<<"In this case, " << s2 << " matches " << s1;
else
cout <<endl<< "Strings didn't match ";


return 0;
}
