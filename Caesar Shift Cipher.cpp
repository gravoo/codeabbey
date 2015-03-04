#include<iostream>
#include<string>
void encryptSentence(std::string,int);
char newChar(char,int);
int main()
{

int counter{0};
int K{0};

std::cin>>counter>>K;
std::getchar();
std::string cryptedSentence;
while(counter--)
{
	std::getline(std::cin,cryptedSentence);
	encryptSentence(cryptedSentence,K);
}
}

void encryptSentence(std::string cryptedSentence,int K)
{
	for(int i{0};cryptedSentence[i]!='.';i++)
		std::cout<<newChar(cryptedSentence[i],K);
	std::cout<<". ";
}
char newChar(char mark,int K)
{
	if(mark<'A'||mark>'Z')
		return mark;
	
	while(K--)
	{
		mark--;
		mark = (mark>='A') ? mark : 'Z';
	}
	return mark;
}
