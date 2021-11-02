
#include <iostream>
#include <cmath>

typedef float real;
real sum1(int N);
real sum2(int N);
real sum_exact(int N);

int main(int argc, char const *argv[])
{
	std::cout.precision(15);
	std::cout.setf(std::ios::scientific);
	int N=100;
	for (int i = 1; i < N; ++i)
	{
		real suma1 = sum1(i);
		real suma2 = sum2(i);
		real suma3 = sum_exact(i);
		
		//std::cout << i << "\t"<< suma1<<"\t"<<suma2 << "\t"<<suma3 <<"\n";

		std::cout << i << "\t"<< std:: fabs(1-suma1/suma3)<<"\t"<<std:: fabs(1-suma2/suma3) <<"\n";
	}
	return 0;
}

real sum1(int N){
	real sum=0;
	for (int i = 1; i <= 2*N; ++i)
	{
		sum+= std::pow(-1.0,i)*(i/(i+1.0));
	}
	return sum;
}




real sum2(int N){
	real sumneg =0;
	real sumpos=0;
	for (int i = 1; i <= N; ++i)
	{
		sumneg+=((-1)*((2.0*i-1.0)/(2.0*i)));
	}
	for (int i = 1; i <= N; ++i)
	{
		sumpos+=((2.0*i)/(2.0*i+1.0));
	}
	return sumneg + sumpos;
}


real sum_exact(int N){
	real sum=0;
	for (int i = 1; i <= N; ++i)
	{
		sum+= ((1)/((2.0*i)*(2.0*i+1.0)));
	}
	return sum;
}