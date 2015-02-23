#include<iostream>
#include <iomanip>
double getTime(int,int,int);
int main()
{    
     

    int counter{0};
    std::cin>>counter;
    int v1{0},v2{0},s{0};
    while(counter--)
    {
        std::cin>>s>>v1>>v2;
        std::cout<<std::setprecision(10)<<getTime(v1,v2,s)*v1<<" ";
    }
    

}
double getTime(int V1,int V2,int S)
{

    return (double)S/(V1+V2);
}
