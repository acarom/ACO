// gcc -o p -fopenmp OpenMP.c -lm 
#include <stdio.h>
#include <omp.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

void main() {
    // N of the sum to calculate Pi
    long long int N = 1e5; //50000;
    //int n_threads = 2;
    int n_threads;
    printf("Enter the number of threads: ");
    scanf("%d", &n_threads);

    long long int n_length = N/n_threads;
    printf("n_length = %lli \n", n_length);
    double start_time, end_time;

    if (n_length == 0 || N%n_threads != 0){
      printf("Error: Check the number threads for the N of the sum.\n");
      exit(0);
    }
    
    // Array with a number of threads
    float array[n_threads];  

    // double sqrt12 = sqrt(12);
    // double m1over3 =  -1.0/3.0;
    
    //omp_set_dynamic(0);
    //omp_set_num_threads(omp_get_num_procs());
    //omp_set_num_threads(n_threads);
    
    clock_t begin = clock(); //time.h for clocking the computation
    start_time = omp_get_wtime(); //omp.h for clocking the computation
    // double sum = 0.0;
    
#pragma omp parallel num_threads(n_threads) 
  {
    int ID = omp_get_thread_num();
    int nthreads = omp_get_num_threads(); // gets the number of threads
    
    double sum = 0.0;
    int lstart = n_length * ID;
    int lend = n_length * (ID+1);

    // printf("lend = %i \n", lend);

    //# pragma omp for 
    // for (int k = ID; k < N; k += nthreads){
    for (long long int k = lstart; k < lend; k++){
        sum += k;
    }
    //printf("Sum =%LE \n", sum);
    array[ID] = sum;
    printf("Array[ %i ] = %f \n", ID,array[ID]);
  } // end of parallel section
    end_time = omp_get_wtime();
    
    double time = 1000.*(clock() - begin)/CLOCKS_PER_SEC; //ms
    double time2 = 1000.*(end_time - start_time); //ms

    long double fsum = 0.0;

    for (int i = 0; i < n_threads; i++) {
        fsum += array[i];
    }

    printf("Final Sum = %Lf \n\n", fsum);
    printf(" Time CLOCK = %f ms \n",time); 
    printf(" Time OMP = %f ms \n",time2);
    printf(" Time Diff = %f ms \n",time-time2); 
}