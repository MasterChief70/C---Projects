#include<iostream>
#include<math.h>
#include"quadraticformula.h"
using namespace std;
int main(void)
{
double a{ 1.0 }, b{ 1.0 }, c{ 1 };
double x{ 0.0 }, y{ 0.0 };
int z{ 0 };
cout << "Please enter coefficients a, b, and c of ax2 + bx + c: ";
cin >> a >> b >> c;
QuadraticFormula(x, y, z, a, b, c);
switch (z) {
case 0:
cout << "No real roots!" << endl;
break;
case 1:
cout << "Roots are real and same." << endl;
cout << "Root 1 = Root 2 = " << x << endl;
break;
case 2:
cout << "Roots are real and different." << endl;
cout << "Root 1 = " << x << endl;
cout << "Root 2 = " << y << endl;
break;
default:
cout << "\nShould never get here!";
};
return 0;
}
