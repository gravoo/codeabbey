#include<iostream>

int main()
{
    int counter{0};
    std::cin>>counter;
    int a{0},b{0},c{0};
    while(counter--)
    {
        std::cin>>a>>b>>c;
        std::cout<<((2*a+(c-1)*b)*c)/2<<" ";
    }    
}
