#include<iostream>
#include<cmath>
double getNumberOfYears(double,double,double);

int main()
{
using std::cin;
using std::cout;

int counter{0};
cin>>counter;
double V0{0},V{0},P{0};

while(counter--)
{
	cin>>V0>>V>>P;
	cout<<getNumberOfYears(V0,V,P)<<" ";
}

}

double getNumberOfYears(double V0,double V,double P)
{
	
	return std::ceil(std::log(V/V0)/std::log(1.0+(P/100)));
}
