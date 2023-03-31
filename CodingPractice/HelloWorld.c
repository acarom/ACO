// gcc HelloWorld.c
#include <stdio.h>
#include <stdlib.h>

void main(int argc, char **argv){
    printf("argc = %d, argv[0] = %s \n", argc, argv[0]);
    printf("argc = %d, argv[1] = %d \n", argc, atoi(argv[1]));

    //return;
}