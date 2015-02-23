#include<iostream>
long checkSUM(long);
int main()
{
using std::cin;
using std::cout;

int counter{0};
long a{0},result{0};
cin>>counter;


while(counter--)
{
    cin>>a;
    result+=a;
    result=checkSUM(result);
}
    cout<<result;
}
long checkSUM(long a)
{
    a*=113;
    a=a%10000007;
    return a;
}
