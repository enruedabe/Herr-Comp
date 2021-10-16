#include <iostream>
#include <cmath>

double mysin(double x, int N);

int main(int argc, char const *argv[])
{	std::cout.precision(15);
	const double x=M_PI/3;
	const double exact = std::sin(x);
	for (double NMax = 0; NMax <= 10; ++NMax){
		double diff =std::fabs(mysin(x,NMax)-exact)/exact;
		std::cout <<NMax<< "\t";
		std::cout <<diff<< "\n";
	}return 0;}


double mysin(double x, int N){
	
	double sum=0;
	for (float i = 1; i <= N; ++i)
	{
		sum=sum+((std::pow(-1,i-1))*(std::pow(x,(2*i)-1)))/(std::tgamma(2*i));
	}

	return sum;
}