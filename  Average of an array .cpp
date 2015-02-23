#include<iostream>
#include<string>
#include<cmath>
int mean();
int mean(double,double);
int main()
{
using std::cin;
using std::cout;

int counter{0};
cin>>counter;


while(counter--)
{
    cout<<mean()<<" ";
}

}
int mean()
{
    int counter{0},sum{0},number{1};
    while(number)
    {
    std::cin>>number;
    sum+=number;
    counter++;
    }
    return mean(sum,counter-1);
}
int mean(double sum,double counter)
{
    double result=sum/counter;    
    return std::round(result);
}
