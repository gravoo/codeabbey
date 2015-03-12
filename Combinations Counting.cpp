#include<iostream>

long long factorial(long long,long long);
int main()
{
	int counter{0};
	std::cin>>counter;
	
	int N{0},K{0};
	while(counter--)
	{
		std::cin>>N>>K;
		std::cout<<factorial(N,K)<<" ";
	}
}
long long factorial(long long  N,long long  K)
{
	long long result{1};
	long long k2{1};
	for(long long i=(N-K+1),k=1;k<=K;i++,k++)
	{
		result*=i;
		k2*=k;
		if(!(result%k2)&&k2!=1)
		{
			result=result/k2;
			k2=1;
		}
	}

	return result;

}
