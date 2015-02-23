#include<iostream>
int sum(int,int);


int main()
{

using std::cin;
using std::cout;
int a{0},b{0};

cin>>a;
cin>>b;
cout<<sum(a,b)<<std::endl;

}

int sum(int a,int b)
{
    return a+b;
}
