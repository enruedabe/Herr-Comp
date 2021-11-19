#include <random>
#include <iostream>

void fill_array(double * array, int size, int seed, double mu, double sigma);
double get_mean(double * array, int size);

int main(int argc, char *argv[])
{
    const int N = std::atoi(argv[1]); 
    int seed = std::atoi(argv[2]); // Se cambia el 3 por 2 del atoi para que lea el segundo argumento escrito en al correr el ejecutable
    double * data= nullptr;
    data = new double [N];
    fill_array(data, N, seed, 1.5, 0.5);
    std::cout<< "The mean is : " << get_mean(data, N) << std::endl; //Se le quita el +1 en get mean para el numero de datos que intente tomar la funcion concuerde con el tamano del arreglo
    delete[] data; // Se vuelve a liberar la memoria

    return 0;
}

void fill_array(double * array, int size, int seed, double mu, double sigma)
{
    std::mt19937 gen(seed);
    std::normal_distribution<> dis{mu, sigma};
    for(int n = 0; n < size; ++n) { // Se cambia la condicion del for para que el array se llene correctamente
        array[n] = dis(gen); //se quita el ++ para evitar un doble incremento
    }
}

double get_mean(double * array, int size)
{
    double sum;
    for (int ii = 0; ii < size; ++ii ) { //Se cambia la condicion de for para que recorra todos los valores del array y no se pase, ademas se cambia el incremento para que recorra uno a uno cada valor del array
        sum += array[ii]; //Se hace sumar para que cobre sentido
    }
    // array = new double [2]; Se elimina la peticion de memoria pues no tiene sentido pedir mas
    return sum/size;
}
