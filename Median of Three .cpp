#include<iostream>
#include<string>
int getMedian(int*);

int main()
{
using std::cin;
using std::cout;

int counter{0};
cin>>counter;

int *mediana = new int[3];
while(counter--)
{
    cin>>mediana[0]>>mediana[1]>>mediana[2];
    cout<<getMedian(mediana)<<" ";
    
}
delete [] mediana;
}

int getMedian(int *mediana)
{

int tmp{0};
if(mediana[0]<mediana[1])
{
tmp=mediana[0];
mediana[0]=mediana[1];
mediana[1]=tmp;
}
if(mediana[1]<mediana[2])
{
tmp=mediana[1];
mediana[1]=mediana[2];
mediana[2]=tmp;}
if(mediana[0]<mediana[1])
{
tmp=mediana[0];
mediana[0]=mediana[1];
mediana[1]=tmp;
}
return mediana[1];
}
