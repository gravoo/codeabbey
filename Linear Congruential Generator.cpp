#include<iostream>

int rand(int,int,int,int,int);
int main()
{

int counter{0};
std::cin>>counter;

int A{0},C{0},M{0},X0{0},N{0};

while(counter--)
{
	std::cin>>A>>C>>M>>X0>>N;
	std::cout<<rand(A,C,M,X0,N)<<" ";
}
}
int rand(int A,int C,int M,int Xcur,int N)
{
	while(N--)
		Xcur=(A*Xcur+C)%M;
	return Xcur;
}
