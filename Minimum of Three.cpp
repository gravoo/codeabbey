#include<iostream>

int main()
{
using std::cin;
using std::cout;
int a{0},b{0},c{0},d{0};
cin>>a;
while(a--)
{
    cin>>c;
    cin>>b;
    cin>>d;
    if(c<b&&c<d)
        cout<<c<<" ";
    else if(b<d)
        cout<<b<<" ";
    else 
        cout<<d<<" ";    
}


}
