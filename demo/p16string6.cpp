#include<iostream>
#include<string>
using namespace std;
int main(void)
{
std::string s,x;
cout<<endl<<" Enter Something =>";
getline(cin, s);
cout<<endl<<" Enter Search Item =>";
getline(cin, x);
size_t it = s.find(x);
if (it != std::string::npos)
std::cout << "Found at position: " << it << '\n';
else
std::cout << "Not found!\n";
return 0;
}
