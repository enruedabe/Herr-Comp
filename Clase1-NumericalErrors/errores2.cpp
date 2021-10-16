#include <iostream>

typedef float Real;

int main(int argc, char const *argv[])
{
	std::cout.setf(std::ios::scientific);
	Real under=1.0;
	Real over= 1.0;
	int Nmax=127;
	int n=0;
	while(n<=Nmax){
		under/=2.0;
		over*=2.0;
		std::cout <<n<<"\t"<< under <<"\t"<<over<<"\n";
		++n;
	}
	return 0;
}