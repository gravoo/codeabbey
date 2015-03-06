#include<iostream>

int result();
int main()
{

int counter{0};
std::cin>>counter;

std::getchar();
while(counter--)
{
	std::cout<<result()<<" ";
}
}
int result()
{
	int in{0},acc{0};
	char endline{' '};
	while(endline!='\n')
		{
			std::cin>>in;
			acc+=in*in;
			endline=std::getchar();
		}
	return acc;	
}
