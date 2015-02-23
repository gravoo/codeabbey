#include <iostream>
#include <iomanip>

double root(int,int);

int main()
{
int counter{0},steps{0},input{0};
std::cin>>counter;
while(counter--)
{
    std::cin>>input>>steps;
    std::cout<<std::setprecision(8)<<root(input,steps)<<" ";
}
return 0;
}
double root(int input,int steps)
{
    double square_root{1},tmp{0};
    while(steps--)
        {
            tmp=input/square_root;
            square_root=(square_root+tmp)/2;
        }
    
    return square_root;
}
