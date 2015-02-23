#include<iostream>

int getDiceNumber(int,int);

int main()
{

int counter{0};
std::cin>>counter;
int value1{0},value2{0};

while(counter--)
{
    std::cin>>value1>>value2;
    std::cout<<getDiceNumber(value1,value2)<<" ";
}

}

int getDiceNumber(int value1,int value2)
{
    return ((value1%6)+1)+((value2%6)+1);
}
