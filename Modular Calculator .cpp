#include<iostream>
int calc(unsigned int,unsigned int,char);
int main()
{
    using std::cin;
    using std::cout;

    unsigned int a{0},b{0};
    char mark;
    cin>>a;

    while(mark!='%')
    {    
        cin>>mark;
        cin>>b;
        a=calc(a,b,mark);    
    }
    cout<<a<<std::endl;
}
int calc(unsigned int numberA,unsigned int numberB,char mark)
{
    int result{0};
    switch (mark)
        {
        case '*':
            numberA*=numberB;
            break;
        case '+':
            numberA+=numberB;
            break;
        case '%':
            numberA%=numberB;
            break;
        }
    return numberA;
}
