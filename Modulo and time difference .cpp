#include<iostream>
int convertToSecond(int*);
void calculate(int*);
int main()
{    
    int  number{8};
    int counter{0};
    int tab[8]{0};
    int *wsk=&tab[0];
    
    std::cin>>counter;
    
    while(counter--)
    {
        while(number--)
        {
            std::cin>>*wsk;
            wsk++;        
        }
        calculate(tab);
        wsk=tab;
        number=8;
    }
}

int convertToSecond(int* tab)
{
    int beg{0},end{0},dif{0};

    beg=(tab[0]*24*60+tab[1]*60+tab[2])*60+tab[3];
    end=(tab[4]*24*60+tab[5]*60+tab[6])*60+tab[7];
    dif=end-beg;
    
    return dif;
}
void calculate(int* tab)
{
    int dif=convertToSecond(tab);
    std::cout<<"("<<dif/86400<<" ";
    dif=dif%86400;
    std::cout<<dif/3600<<" ";
    dif=dif%3600;
    std::cout<<dif/60<<" ";
    dif=dif%60;
    std::cout<<dif<<") ";
}
