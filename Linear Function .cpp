#include<iostream>
int calcA(int,int,int,int);
int calcB(int,int,int);
int main()
{    
    
    int a{0},b{0},c{0},d{0};
    int counter{0};
    std::cin>>counter;
    while(counter--)
    {
        std::cin>>a>>b>>c>>d;
        c=calcA(a,b,c,d);
        d=calcB(a,b,c);
        std::cout<<"("<<c<<" "<<d<<") ";
    }
    
}
int calcA(int x1,int y1,int x2,int y2)
{
    if(!(x2-x1))
        return 0;

    return (y2-y1)/(x2-x1);
}
int calcB(int x1,int y1,int a)
{
    if(!(a*x1))
        return 0;
    return y1-(a*x1);
}
