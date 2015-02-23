#include <iostream>

int triangle(int,int,int);

int main()
{
int counter{0},sideA{0},sideB{0},hypotenuse{0};
std::cin>>counter;
while(counter--)
{
    std::cin>>sideA>>sideB>>hypotenuse;
    switch (triangle(sideA,sideB,hypotenuse))
        {
            case 1 : std::cout<<"R";
            break;
            case 2 : std::cout<<"A";
            break;
            case 3 : std::cout<<"O";
            break;
            default:
            break;
        }
    std::cout<<" ";
}
return 0;
}
int triangle(int sideA,int sideB,int hypotenuse)
{
    int side=sideA=sideA*sideA+sideB*sideB;
    hypotenuse=hypotenuse*hypotenuse;
    
    if(side==hypotenuse)
        return 1;
    else if(side<hypotenuse)
        return 3;
    else if(side>hypotenuse)
        return 2;
        
    return 0;
    
}
