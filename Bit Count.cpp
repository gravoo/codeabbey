#include<iostream>
int bitCount(int);
int main()
{    
     

    int counter{0};
    std::cin>>counter;
    int val{0};
    while(counter--)
    {
        std::cin>>val;
        std::cout<<bitCount(val)<<" ";
        
    }


}
int bitCount(int x)
{
    int counter{sizeof(x)*8};
    int numOfBits{0};
    while(counter--)
    {
        if(x&1)
            numOfBits++;
        x=x>>1;
    }
    return numOfBits;
}
