#include<iostream>

int Josephus(int n,int k)
{
    if(n==1)
        return 0;
    else 
        return ((Josephus(n-1,k)+k)%n);

}

int main()
{

    int n{0},k{0};
    std::cin>>n>>k;
    std::cout<<Josephus(n,k)+1;

}
