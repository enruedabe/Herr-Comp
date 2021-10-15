#include <iostream>

int main(int argc, char const *argv[])
{
	float a=0.0;
	for (int i = 0; i < 10; ++i)
	{
		a+=0.1;
	}
	std::cout.precision(7);
	std::cout.setf(std::ios::scientific);
	std::cout<<a<<"\n";
	return 0;
}