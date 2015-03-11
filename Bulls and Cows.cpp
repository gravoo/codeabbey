#include<iostream>
#include<string>
short match(std::string,std::string);
short exactMatch(std::string,std::string);
int main()
{
	std::string pattern;
	std::cin>>pattern;
	getchar();
	int counter{0};
	std::cin>>counter;
	getchar();
	std::string game;
	
	short exactMatch_n{0};
	while(counter--)
	{
		std::cin>>game;
		getchar();
		exactMatch_n=exactMatch(game,pattern);
		std::cout<<exactMatch_n<<"-"
			 <<match(game,pattern)-exactMatch_n<<" ";
		
	}
}
short exactMatch(std::string game,std::string pattern)
{
	short count{0};
	for(int i{0};i<pattern.length();i++)
	{
		if(pattern[i]==game[i])
			count++;
	}
	return count;
}

short match(std::string game,std::string pattern)
{
	short count{0};
	for(int i{0};i<pattern.length();i++)
	{
		if(pattern.find(game[i])!=std::string::npos)
			count++;
	}	
	return count;
}

