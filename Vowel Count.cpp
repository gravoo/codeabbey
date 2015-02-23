#include<iostream>
#include<string>
int countVowel(std::string);

int main()
{
using std::cin;
using std::cout;

int a{0};
std::string word;
cin>>a;
std::cin.get();
while(a--)
{
    std::getline(std::cin,word);
    std::cout<<countVowel(word)<<" ";

}

}

int countVowel(std::string word)
{
    char *wsk=&word[0];
    int counter{0};
    while(*wsk)
    {
                switch(*wsk)
        {
            case 'a':
            case 'A':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
            case 'i':
            case 'I':
            case 'e':
            case 'E':
            case 'y':
            case 'Y':
                counter++;
                break;            
            default:
                break;
                        
        }
    wsk++;    
    }
    return counter;
}
