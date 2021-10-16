#include <iostream>
#include <cmath>

double mysin(double x, int N);

int main(int argc, char const *argv[])
{
	std::cout.precision(15);
	const double x=M_PI/3;
	const double exact = std::sin(x);
	for (double NMax = 0; NMax <= 18; ++NMax)
	{	double diff =std::fabs(mysin(x,NMax)-exact)/exact;
		std::cout <<NMax<< "\t";
		std::cout <<diff<< "\n";
	}return 0;}

int factorial(int n)       
{   if(n==0 || n==1)return 1;
    else return n * factorial(n - 1);}

double mysin(double x, int N){
	
	double sum=0;
	for (int i = 1; i <= N; ++i){
		sum=sum+((std::pow(-1,i-1))*(std::pow(x,(2*i)-1)))/(factorial((2*i)-1));}
	return sum;}