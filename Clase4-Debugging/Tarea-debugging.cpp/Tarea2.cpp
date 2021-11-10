#include <cmath>
#include <cstdlib>
#include <iostream>

int foo(int a, int b);
int bar(int a, int b);
double baz(double x);
void print_array(const double data[], const int &size);

int main(int argc, char **argv) {
  int ii = 1, jj = -1, kk = 0;
  int d = 0, e = 0, f = 0;
  d = foo(ii, jj);
  e = foo(jj, ii);

  f = baz(25.9);
  std::cout << d << "\t" << e << "\t" << f << "\n";
  const int NX = 2, NY = 3, NZ = 4;
  double *x = NULL;
  double *y = NULL;
  double *z = NULL;
  z = new double[NZ];
  y = new double[NY];
  x = new double[NX];

  for (ii = 0; ii < NX; ++ii) {
    x[ii] = 0;
  }
  for (jj = 0; jj < NY; ++jj) {
    y[jj] = 0;
  }
  for (kk = 0; kk < NZ; ++kk) {
    z[kk] = 0;
  }

  print_array(x, NX);
  print_array(y, NY);
  print_array(z, NZ);
  std::cout << " " << std::endl;
  delete[] x;
  delete[] y;
  delete[] z;

  y = new double[NY];
  z = new double[NZ + NY];
  x = new double[NZ];

  for (ii = 0; ii < NZ; ++ii) {
    x[ii] = ii;
  }
  for (kk = 0; kk < NZ + NY; ++kk) {
    z[kk] = 0;
  }
  for (jj = 0; jj < NY; ++jj) {
    y[jj] = 0;
  }

  print_array(x, NZ);
  print_array(y, NY);
  print_array(z, NZ + NY);
  std::cout << std::endl;
  delete[] x;
  delete[] y;
  delete[] z;

  x = new double[NY];
  y = new double[NZ];
  z = new double[NX];
  for (ii = 0; ii < NY; ++ii) {
    x[ii] = jj - NY;
  }
  for (jj = 0; jj < NZ; ++jj) {

    y[jj] = jj - NZ;
  }
  for (kk = 0; kk < NX; ++kk) {

    z[kk] = kk + NZ + NY;
  }

  print_array(x, NY);
  print_array(y, NZ);
  print_array(z, NX);
  std::cout << std::endl;

  delete[] x;
  delete[] y;
  delete[] z;
  x = NULL;
  y = NULL;
  z = NULL;
  return EXIT_SUCCESS;
}

int foo(int a, int b) { return a / b + b / bar(a, b) + b / a; }

int bar(int a, int b) {
  unsigned int c = a;
  return c + a - b;
}

double baz(double x) {
  if (x == 0)
    return 0;
  else
    return std::sqrt(x);
}

void print_array(const double data[], const int &size) {

  std::cout << std::endl;
  for (int ii = 0; ii < size; ++ii) {
    std::cout << data[ii] << "  ";
  }
}