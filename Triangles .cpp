#include<iostream>
#include<string>
bool createTriangle(int *,int);
void sort(int *,int);

int main()
{
    using std::cin;
    using std::cout;

    int counter{0};
    const int size{3};
    cin>>counter;

    int tab[size];
    while(counter--)
    {
        cin>>tab[0]>>tab[1]>>tab[2];
        cout<<(int)createTriangle(tab,size)<<" \n";
    }    
}
bool createTriangle(int *tab,int size)
{
sort(tab,size);
    if(tab[0]+tab[1]>=tab[2])
        return true;    
    return false;
}
void sort(int * tab,int size)
{
    int tmp{0};
    if(tab[0]>tab[1])
    {
        tmp=tab[0];
        tab[0]=tab[1];
        tab[1]=tmp;
    }
    if(tab[1]>tab[2])
    {
        tmp=tab[1];
        tab[1]=tab[2];
        tab[2]=tmp;
    }
    if(tab[0]>tab[1])
    {
        tmp=tab[0];
        tab[0]=tab[1];
        tab[1]=tmp;
    }
        
    
}
