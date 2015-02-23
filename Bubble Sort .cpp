#include<iostream>

void swap(int,int*);
void sort(int*,int);
int main()
{
    using std::cin;
    using std::cout;

    int a{0},size{0};
    cin>>size;
    int *tab = new int [size+1];

    while(a<size)
    {
        cin>>tab[a];
        a++;
    
    }
    sort(tab,size);    
    
    delete [] tab;

}
void sort(int * tab,int size)
{
    int tabSize{size},swaps{0},z{0};
    for(z;z<tabSize;z++)
    {
        for(int i{0};i+1<size;i++)
        {
            if(tab[i]>tab[i+1])
            {
                swap(i,tab);
                swaps++;
            }
        }
        tabSize--;
    }
    std::cout<<z+1<<" "<<swaps<<std::endl;
    
}
void swap(int i,int *tab)
{
    tab[i]=tab[i]^tab[i+1];
    tab[1+i]=tab[i]^tab[i+1];
    tab[i]=tab[i]^tab[i+1];
}
