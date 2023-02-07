#ifndef quadformula_h // include guards
#define quadformula_h // include guards
#include<iostream>
#include<math.h>
#include"quadformula.cpp"
using namespace std;
void QuadraticFormula(double&, double&, int&,
double = 0, double = 0.0, double = 0.0);
// We could also have written something like
// void QuadraticFormula(double& r1_ref, double& r2_ref, int& s_c_ref,double a, double b, double c);
#endif
