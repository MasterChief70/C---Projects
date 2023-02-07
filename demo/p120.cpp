#include <iostream>
using namespace std;
Maximum(T value1, T value2, T value3)
{
max = value1; 
if (value2 > max)
max = value2;

if (value3 > max)
max = value3;
return max;
} 
int main(void)
{
int i1, i2, i3;
cout << "Input three integer values: ";cin >> i1 >> i2 >> i3;
cout << "The maximum integer value is: "<< Maximum(i1, i2, i3);

double d1, d2, d3;
cout << "\n\nInput three double values: ";cin >>d1 >>d2 >>d3;
cout << "The maximum double value is: " << Maximum(d1,d2,d3);
} 

