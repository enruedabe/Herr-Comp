#include <iostream>
#include <cmath>
#include <cstdlib>

float p(float x);
float q(float x);
float r(float x);

int main(int argc, char **argv)
{
    float x=1;
    x = std::atof(argv[1]);
    std::cout.precision(15);
    std::cout.setf(std::ios::scientific);
    std::cout << x << "\t" << p(x) << "\t" << q(x) << "\t" << r(x) << "\n";
    // Escriba acá como comentario cuál función usaría siempre y porqué
    /* Escogeria la primera porque es la que da los valores  mas cercanos al teorico cuando x->1 
       ademas al solo depender de un resta y que la funcion este optimizada por el estandar de c++ 
       seguramente sera algo mejor a lo que alguna expansion simple*/ 
  return 0;
}


float p(float x)
{
    return std::pow(1-x,8);
}

float q(float x)
{
    return 1 -8*x+28*(x*x)-56*(x*x*x) +70*(x*x*x*x)-56*(x*x*x*x*x)+28*(x*x*x*x*x*x)-8*(x*x*x*x*x*x*x)+(x*x*x*x*x*x*x*x);
}

float r(float x)
{
    return 1 -8*x+28*std::pow(x,2)-56*std::pow(x,3) +70*std::pow(x,4)-56*std::pow(x,5)+28*std::pow(x,6)-8*std::pow(x,7)+std::pow(x,2);
}
