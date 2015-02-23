#include<iostream>
#include<string>
int getDiceNumber(int);

int main()
{
using std::cin;
using std::cout;

int counter{0};
cin>>counter;
double value{0};

while(counter--)
{
    cin>>value;
    cout<<getDiceNumber(value*6)<<" ";
    
}

}

int getDiceNumber(int value)
{
    return value+1;
}
