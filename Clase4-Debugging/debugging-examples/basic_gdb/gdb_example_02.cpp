#include <iostream>
#include <cstdlib>

void do_something(int & var); 

int main(int argc, char **argv) 
{
  int a=0;
  std::cout << a << std::endl;
  do_something(a);
  std::cout << a << std::endl;

  return EXIT_SUCCESS;
}

void do_something(int & var)
{
  var = 10.0;
} 
