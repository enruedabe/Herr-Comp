//Comparar suma harmonica recorrida de dos formas distintas para ver las diferencias computacionales
#include <iostream>

typedef float real;
real sumup(int N);
real sumdown(int N);

int main(int argc, char const *argv[])
{
	std::cout.precision(6);
	std::cout.setf(std::ios::scientific);
	int N=1000;
	real dif= std::abs(sumup(N)-sumdown(N))/sumdown(N);
	std::cout <<sumup(N)<<"\t" <<sumdown(N)<< "\t"<<dif <<"\n";
	return 0;
}

real sumup(int N){
	real sum=0;
	for (int i = 1; i <= N; ++i)
	{
		sum+= 1.0/i;
	}
	return sum;
}




real sumdown(int N){
	real sum =0;
	for (int i = N; i >= 1; --i)
	{
		sum+=1.0/i;
	}
	return sum;
}
