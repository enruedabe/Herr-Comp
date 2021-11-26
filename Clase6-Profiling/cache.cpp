#include <cstdio>
#include <cstdlib>//atoi

/*
   Tests cache misses.
*/

int main(int argc, char **argv)
{
  if (argc < 3){
    printf("Usage: cacheTest sizeI sizeJ\nIn first input.\n");
    return 1;
  }
  long sI = atoi(argv[1]);//nrows
  long sJ = atoi(argv[2]);//ncolumns

  printf("Operating on matrix of size %ld by %ld\n", sI, sJ);

  long *arr = new long[sI*sJ]; // double array.

  // option 1: varian mas rapido las columnas
  for (long i=0; i < sI; ++i)
    for (long j=0; j < sJ; ++j)
      arr[(i * (sJ)) + j ] = i;
  
  // option 2: varian mas rapido las filas
  for (long i=0; i < sI; ++i)
      for (long j=0; j < sJ; ++j)
         arr[(j * (sI)) + i ] = i;

  // option 3: recorrido lineal
  for (int i=0; i < sI*sJ; ++i) arr[i] = i;

  printf("%ld\n", arr[0]);
  
  return 0;
}
