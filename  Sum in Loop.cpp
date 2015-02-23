#include<iostream>

int main()
{

using std::cin;
using std::cout;
int a{0},b{0},sum{0};

cin>>a;

while(a>0)
{
    cin>>b;
    sum+=b;
    a--;
        
}
cout<<sum;

}
