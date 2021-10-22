//Comparar suma harmonica recorrida de dos formas distintas para ver las diferencias computacionales
#include <iostream>
#include <cmath>

typedef float real;
real sumup(int N);
real sumdown(int N);

int main(int argc, char const *argv[])
{
	std::cout.precision(6);
	std::cout.setf(std::ios::scientific);
	int N=1000;
	for (int i = 1; i < N; ++i)
	{
		real suma1 = sumup(i);
		real suma2 = sumdown(i);
		std::cout << i << "\t"<< std:: fabs(1-suma1/suma2)<<"\n";
	}
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
