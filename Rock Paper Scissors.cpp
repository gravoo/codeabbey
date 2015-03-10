#include<iostream>
#include<cstdio>
short score(std::string);
short pkt(char a,char b);
int main()
{
	int counter{0};
	std::cin>>counter;
	std::string game;
	getchar();
	while(counter--)
	{
		std::getline(std::cin,game);
		std::cout<<score(game)<<" ";
		
	}
}
short score(std::string game)
{
	short playerA{0},playerB{0},result,i;
	for(i=0;i<game.length()+1;i++)
	{
		if(game[i]==' '||game[i]=='\0')
			result=pkt(game[i-2],game[i-1]);
		if(result>0)
			playerA++;
		else if(result < 0)
			playerB++;
	}
	return result=(playerA>playerB)? 1:2 ;
}
short pkt(char a,char b)
{
	if(a==b)
		return 0;
	if(a=='P'&&b=='R')
		return 1;
	if(a=='R'&&b=='P')
		return -1;
	if(a=='R'&&b=='S')
		return 1;
	if(a=='S'&&b=='R')
		return -1;
	if(a=='S'&&b=='P')
		return 1;
	if(a=='P'&&b=='S')
		return -1;
}

