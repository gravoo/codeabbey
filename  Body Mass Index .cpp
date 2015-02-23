#include<iostream>
#include<string>
std::string getBMI(double,double);

int main()
{
using std::cin;
using std::cout;

int counter{0};
cin>>counter;

int mass{0};
double height{0};
while(counter--)
{
    cin>>mass>>height;
    cout<<getBMI(height,mass)<<" ";
    
}

}

std::string getBMI(double height,double mass)
{
double BMI=mass/(height*height);

if(BMI<25)
{
 if(BMI<18.5)
    return "under";
 else 
    return "normal";
}
else
{
    if(BMI<30)
        return "over";
    else
        return "obese";
}

}
