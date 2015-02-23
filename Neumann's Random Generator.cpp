#include<iostream>
#include<string>
int pseudoRand(int);
int mid(int);
bool check(int *,int,int);
int main()
{
    using std::cin;
    using std::cout;

    int counter{0};
    cin>>counter;
    int number;
    while(counter--)
    {
        cin>>number;
        cout<<pseudoRand(number)<<" ";
    }    
}
int pseudoRand(int pattern)
{
    int tmp=pattern,i{0};
    int *tab=new int[1000];

    do
    {
        tab[i]=tmp;
        tmp=tmp*tmp;
        tmp=mid(tmp);
        i++;
    }
    while(check(tab,tmp,i));
    
    delete [] tab;

    return i;
} 
int mid(int number)
{
    std::string cutter=std::to_string(number);
    std::string tmp="";
    while(cutter.length()<8)
    {
        tmp+="0"+cutter;
        cutter=tmp;
        tmp="";
    }
    char *ptr=&cutter[2];
    int length=cutter.length(),i{2};
    std::string out;
    while(i<length-2)
    {    
        out+=*ptr;
        ptr++;
        i++;
    }
    return stoi(out);
}
bool check(int *tab,int num,int ln)
{
    for(int i=0;i<ln;i++)
        {
            if(tab[i]==num)
                return false;
        }
    return true;
}
