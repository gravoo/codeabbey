#include<iostream>
#include<cmath>
int FtoC(int);

int main()
{
using std::cin;
using std::cout;

int a{0},b{0};
cin>>a;
while(a-->0)
{
    cin>>b;
    cout<<FtoC(b)<<" ";
}

}

int FtoC(int F)
{
    float C=round((F-32)/1.8);
    return C;
}
