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
    int *tab2= new int  [size+1];
    while(a<size)
    {
        cin>>tab[a];
        tab2[a]=tab[a];
        a++;
    
    }
    sort(&tab[0],size);    

    for(int i{0};i<size;i++)
    {
        for(int j{0};j<size;j++)
        {
                if(tab[i]==tab2[j])
                {
                    cout<<j+1<<" ";
                    break;
                }
        }
    }
    
    delete [] &tab[0];
    delete [] &tab2[0];

}
void sort(int * tab,int size)
{
    int tabSize{size};
    for(int z{0};z<tabSize;z++)
    {
        for(int i{0};i+1<size;i++)
        {
            if(tab[i]>tab[i+1])
            {
                swap(i,tab);
            
            }
        }
        size--;
    }
    
}
void swap(int i,int *tab)
{
    tab[i]=tab[i]^tab[i+1];
    tab[1+i]=tab[i]^tab[i+1];
    tab[i]=tab[i]^tab[i+1];
}
