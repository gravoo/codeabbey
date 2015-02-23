#include<iostream>

void swap(int,int*);
int sort(int*,int);
long checkSUM(long a);
int main()
{
    using std::cin;
    using std::cout;

    int a{0},size{0},b{0};
    int tab[50]{0};
    
    while(cin>>tab[size]&&tab[size]!=-1)
    {
        size++;
    }

    cout<<sort(tab,size--)<<" ";    

    long result{0};
    for(int i=0;i<=size;i++)
        {
            
            result+=tab[i];
            result=checkSUM(result);
        }
    cout<<result<<"\n";
    
}
int sort(int * tab,int size)
{
    int swaps{0};
    
        for(int i{0};i<size-1;i++)
        {
            if(tab[i]>tab[i+1])
            {
                swap(i,tab);
                swaps++;
            
            }
        }
        size--;
    
    
    return swaps;
}
void swap(int i,int *tab)
{
    tab[i]=tab[i]^tab[i+1];
    tab[1+i]=tab[i]^tab[i+1];
    tab[i]=tab[i]^tab[i+1];
}
long checkSUM(long a)
{
    a*=113;
    a=a%10000007;
    return a;
}
