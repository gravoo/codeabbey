#include<iostream>
int gcd(int,int);
int main()
{    
    
    int a{0},b{0},c{0};
    int counter{0};
    std::cin>>counter;
    while(counter--)
    {
        std::cin>>a>>b;
        c=gcd(a,b);
        std::cout<<"("<<c<<" "<<a*b/c<<") ";
    }
    
}
int gcd(int a,int b)
{
    while(a!=0)
    {
        if(a<b)
        {
            a^=b;b^=a;a^=b;
        }
        a%=b;
    }
    return b;
}
