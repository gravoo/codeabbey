#include<iostream>
#include<string>
int main()
{
    using std::cin;
    using std::cout;
    using std::string;
    
    string line;
    std::getline(cin,line);
    int a=line.size();
    while(a--)    
        cout<<line[a];
    
}
