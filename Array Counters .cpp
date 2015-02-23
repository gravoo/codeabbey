#include<iostream>

int main()
{
using std::cin;
using std::cout;

int counter{0};
int a{0},result{0},range{0};
int *tab;
cin>>counter>>range;
tab=new int[range+1];

while(counter--)
{
    cin>>a;
    tab[a]++;
}
for(int i=1;i<=range;i++)
{
    cout<<tab[i]<<" ";
}

delete [] tab;
}
