#include<iostream>

int main()
{
using std::cin;
using std::cout;
int b{0};
cin>>b;
int a{299},c{b},d{b};
while(a--)
{
    cin>>b;
    if(b>c)
        c=b;
    else if(b<d)
        d=b;    
}

cout<<c<<" "<<d;

}
