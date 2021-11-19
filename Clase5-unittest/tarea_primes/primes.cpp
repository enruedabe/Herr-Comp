#include "primes.h"

int isprime(int m)
{	if (m<2)
{
	return 0;
}
	for (int ii = 2; ii <=std::sqrt(m); ++ii)
	{
		if (m%ii==0)
		{
		return 0;
		}
	}
	return 1;
}

int nthprime(int n)
{
int counter = 0;
if (n==2)
{
	return 2;
}
for (int ii = 2; ; ii++) {
counter += isprime(ii);
if (counter == n) return ii;
}
}

void test_prime(void)
{
std::cout<< "Probando isprime(1) == 0 "  <<"\n";
assert(isprime(1) == 0);
std::cout<< "Test completado "  <<"\n";
std::cout<< "Probando isprime(10) == 0 "  <<"\n";
assert(isprime(10) == 0);
std::cout<< "Test completado "  <<"\n";
std::cout<< "Probando isprime(10) == 0 "  <<"\n";
assert(isprime(10) == 0);
std::cout<< "Test completado "  <<"\n";
std::cout<< "Probando isprime(29) == 1 "  <<"\n";
assert(isprime(29) == 1);
std::cout<< "Test completado "  <<"\n";
std::cout<< "Probando isprime(15485863) == 1 "  <<"\n";
assert(isprime(15485863) == 1);
std::cout<< "Test completado "  <<"\n";
std::cout<< "Probando isprime(179424673) == 1 "  <<"\n";
assert(isprime(179424673) == 1);
std::cout<< "Test completado "  <<"\n";
std::cout<< "Probando isprime(179424674) == 0 "  <<"\n";
assert(isprime(179424674) == 0);
std::cout<< "Test completado "  <<"\n";
std::cout<< "Probando isprime(1000001) == 15485867"  <<"\n";
assert(nthprime(1000001) == 15485867);
std::cout<< "Test completado "  <<"\n";
std::cout<< "Probando isprime(1000002) ==  15485917"  <<"\n";
assert(nthprime(1000002) == 15485917);
std::cout<< "Test completado "  <<"\n";
std::cout<< "Ha completado todos los test"  <<"\n";
}