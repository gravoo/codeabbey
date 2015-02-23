#include<iostream>
int SUM(int,int,int);
int main()
{
using std::cin;
using std::cout;

int counter{0},a,b,c;
cin>>counter;


while(counter--)
{
    cin>>a>>b>>c;
    cout<<SUM(a,b,c)<<" ";
}

}
int SUM(int a,int b,int c)
{
int expr=(a*b)+c,reminder{0},sum{0};

while(expr)
{
    reminder=expr%10;
    expr=expr/10;
    sum+=reminder;
}
return sum;
}

