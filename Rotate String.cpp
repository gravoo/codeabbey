#include<iostream>
#include<string>

std::string rotate(int,std::string);
int main()
{
    using std::cin;
    using std::cout;
    using std::string;

    
    int val{0};
    int counter{0};
    string word;

    cin>>counter;
    while(counter--)
    {
        cin>>val;
        cin.get();
        std::getline(cin,word);
        cout<<rotate(val,word)<<" ";
        
    }
    

}

std::string rotate(int val,std::string word)
{
        std::string helper;
        if(val>0)
        {
            word+=word.substr(0,val);
            helper=word.erase(0,val);
            
        }
        else
        {
             helper=word.substr(word.length()+val); 
            helper+=word.substr(0,word.length()+val);
            
        }

        return helper;
}
