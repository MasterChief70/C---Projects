#include<iostream>
using namespace std;
class Weight
{
int grams;
public:
Weight()
{
grams=0;
}
Weight(int g)
{
grams=g;
}
void showData()
{
cout<<"\nGrams = "<<grams;
}
operator float()
{
return grams/100;
}
};
int main()
{
Weight w1(5000);
w1.showData();
float kg=w1;
cout<<"\nKg ="<<kg;
return 0;
}

