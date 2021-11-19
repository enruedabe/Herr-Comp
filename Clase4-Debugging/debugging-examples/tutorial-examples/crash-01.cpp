// from http://www.tutorialspoint.com/gnu_debugger/gdb_debugging_example1.htm

#include <iostream>



int divint(int, int);

int main() {
  int x = 5, y = 2;
  double a=divint(x, y);
  std::cout << a <<"\n";
  x =3; y = 0;
  a=divint(x, y);
  std::cout << a << "\n";
  return 0;
}

int divint(int a, int b)
{
  if (b==0)
  {
    return 0;
  }
  else return a / b;
} 
