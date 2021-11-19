# include <iostream>
# include <cstdlib>
# include <cmath>
int isprime(int m);
int nthprime(int n);
int main(int argc, char *argv[])
{
const int n =std::atoi(argv[1]);
std::cout << nthprime(n) << "\n";
return 0;
}

int isprime(int m)
{for (int ii = 2; ii <=std::sqrt(m); ++ii)
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