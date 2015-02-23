#include<iostream>

void findPrime(int*,int);
bool checkPrime(int*,int*,int);
int main()
{
    using std::cin;
    using std::cout;

    
    int    const range{200000};
    int primes[range+1]{0};
    int val{0};
    int counter{0};

    findPrime(primes,range);
    cin>>counter;
    
    while(counter--)
    {
        cin>>val;
        cout<<primes[val-1]<<" ";
    }


}
void findPrime(int *tab,int n)
{
    int counter{1};
    *tab=2;

    for(int i{3};counter<=n;i+=2)
    {
        if(checkPrime(tab,tab+counter,i))
            counter++;

    }

}
bool checkPrime(int *tab_b,int *tab_e,int i)
{

    for(;*tab_b**tab_b<=i;tab_b++)
    {
        if(!(i%*tab_b))
            return false;
    }
    
    *tab_e=i;    
    return true;

}
