#include<iostream>
#include <iomanip>

int main()
{
    using std::cin;
    using std::cout;

    int size{0};
    cin>>size;
    double *tab = new double [size+1];
    
    int a{0};
    while(a<size)
    {
        cin>>tab[a];
        a++;
    
    }
    cout<<tab[0]<<" ";
    for(int i=1;i<size-1;i++)
        cout<<std::setprecision(9)<<(tab[i]+tab[i-1]+tab[i+1])/3<<" ";
    cout<<tab[size-1];
    delete [] &tab[0];


}
