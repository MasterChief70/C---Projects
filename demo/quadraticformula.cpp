#include<iostream>
#include<math.h>
using namespace std;
void QuadraticFormula(double& x,double& y,
int& z, double a, double b, double c)
{
double d=b*b-4*a*c;
if(d<0.0)
{
	z=0;
}
else if(d>0.0)
{
	z=2;
	x= (-b + sqrt(d)) / (2 * a);
    y= (-b - sqrt(d)) / (2 * a);
}
else
{
	d=1;
	x=(-b+sqrt(d))/(2*a);
	y=x;
}
return;
}
