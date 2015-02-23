#include<iostream>

int main()
{
using std::cin;
using std::cout;
int a{0},b{0},c{0};
cin>>a;
while(a--)
{
    cin>>c;
    cin>>b;
    if(c<b)
        cout<<c<<" ";
    else
        cout<<b<<" ";        
}


}
