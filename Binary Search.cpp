#include<iostream>
#include<cmath>
double solve(double,double,double,double);
double function(double,double,double,double,double);
int main()
{
	int counter{0};
	std::cin>>counter;
	double A{0},B{0},C{0},D{0};
	std::cout.precision(12);
	while(counter--)
	{
		std::cin>>A>>B>>C>>D;
		std::cout<<solve(A,B,C,D);
		
	}
}
double solve(double A,double B,double C,double D)
{
	double xm{0},xl{0},xr{100};
	double y{1};
	int i=5;
	while(std::abs(y)>0.000000001)
	{
		xm=xr+xl;
		xm=xm/2;
		y=function(A,B,C,D,xm);
		if(y<0)
			xl=xm;
		else
			xr=xm;
	}
	
	
	return xm;

}
double function(double A,double B,double C,double D,double x)
{
	return A*x+B*std::sqrt(x*x*x)-C*std::exp(-x/50)-D;
}


