#include<iostream>

int roundUP(int,int);
int roundDOWN(int,int);
int check(int);
int main()
{
using std::cin;
using std::cout;

int a{10},b{0},c{0};
cin>>a;
while(a-->0)
{
    cin>>b;
    cin>>c;
    if(c<0&&b>0||c>0&&b<0)
        cout<<roundDOWN(b,c)<<" ";
    else
        cout<<roundUP(b,c)<<" ";
    
}



}
int roundUP(int a,int b)
{
if(b==0)
    return 0;
if(abs(a%b)>=abs(b/2))
    return (a/b)+1;
return a/b;
}
int roundDOWN(int a,int b)
{

if(b==0)
    return 0;

if(b==0)
    return 0;
if(abs(a%b)>=abs(b/2))
    return (a/b)-1;


return a/b;

}
