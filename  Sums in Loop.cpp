#include<iostream>

int main()
{
int a{0},b{0},l{0};
int *tab;
std::cin>>a;
tab=new int[a];

while(l<a)
{
    std::cin>>tab[l];
    std::cin>>b;
    tab[l]+=b;
    l++;        
}
for(b=0;b<a;b++)
{
    std::cout<<tab[b]<<" ";
}
std::cout<<std::endl;
delete [] tab;
}
