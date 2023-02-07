#include<iostream>
using namespace std;
class addition
{
	public:
		int add(int x,int y)
		{
			
			return x+y;
		}
		double add(double x,double y)
		{
			return x+y;
		}
};
main()
{
	addition a;
	cout<<endl<<a.add(2,3);
	cout<<endl<<a.add(3.5,2.7);
return 0;
}
