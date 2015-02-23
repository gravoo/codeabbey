#include<iostream>
#include<string>

std::string getWord();
bool checkFormPalindrom(std::string word);
int main()
{
    
    int counter{0};
    std::cin>>counter;
        std::cin.get();
    while(counter--)
    {
        if(checkFormPalindrom(getWord()))
            std::cout<<"Y ";
        else
            std::cout<<"N ";
    }
    

}
std::string getWord()
{
    std::string word="";
    char mark=' ';
    while(mark!='\n')
    {
        std::cin.get(mark);
        if(mark>='a'&&mark<='z')
            word+=mark;
        else if(mark>='A'&&mark<='Z')
            word+=(mark+32);
    }    

    return word;
}
bool checkFormPalindrom(std::string word)
{    

    for ( int i=0,j=word.length()-1; i<j; i++,j--)
        {
            if(word[i]!=word[j])
                return false;
        }
    return true;
}
