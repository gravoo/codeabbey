#include<iostream>

int calc(int);
int sequence(int);
int main()
{
    using std::cin;
    using std::cout;

    int a{0},counter{0};
    cin>>counter;
    while(counter--)
    {
        cin>>a;
        cout<<sequence(a)<<" ";        
    
    }

}
int calc(int a)
{
    if(!(a&1))
        return a>>1;
    else
        return (a*3)+1;
}
int sequence(int a)
{
    int counterOFsteps{0};
    while(a!=1)
    {    
        a=calc(a);    
        counterOFsteps++;
    }
    return counterOFsteps;
}
