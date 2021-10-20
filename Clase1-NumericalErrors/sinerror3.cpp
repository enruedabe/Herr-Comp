#include <iostream>
#include <cmath>

typedef double Real;

Real mysin(Real x, int N);


int main(int argc, char const *argv[])
{	std::cout.precision(15);
	const Real x=0.100*M_PI/3;
	const Real exact = std::sin(x);
	for (Real NMax = 0; NMax <= 1000; ++NMax){
		Real diff =std::fabs(mysin(x,NMax)-exact)/exact;
		std::cout <<NMax<< "\t";
		std::cout <<diff<< "\n";
	}return 0;}



Real mysin(Real x, int N){
	
	//an+1=(-1)X^2 an/((2n+1)(2n))
	Real sum=0.0;
	Real an=x;
	for (int n = 1; n < N; ++n)
	{
		
		sum+=an;
		an=(-1)*x*x*an/((2*n+1)*2*n);
	}
	return sum;
}
	
