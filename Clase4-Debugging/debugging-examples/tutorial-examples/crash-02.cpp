
#include <iostream> 

void setint(int*, int);
int main(void) {
  int a;
  setint(&a, 10);
  std::cout << a << std::endl;
  int* b=NULL;
  setint(b, 10);
  std::cout << b << std::endl;
  return 0;
}
void setint(int* ip, int i) {
  *ip = i;
}
