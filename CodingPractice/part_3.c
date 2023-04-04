#include <stdio.h>

void birthday(char x[], int y)
{
   printf("\n Happy birthday dear %s!", x);
   printf("\n You are %d years old!", y);
}

double square(double x)
{
   double result = x * x;
   return result;
}

int findMax(int x, int y)
{   // ternary operator = shortcut to if/else when assigning/returning a value
    // (condition) ? value if true : value if false
   return (x > y) ? x : y;
}

int main()
{

//? C arguments
    char name[] = "Bro";
    int age = 28;
    birthday(name, age);

//? C return statement
    double x = square(3.14);
    printf("\n x * x = %lf", x);

//? C ternary operator ?
    // ternary operator = shortcut to if/else when assigning/returning a value
    // (condition) ? value if true : value if false
    int max = findMax(3, 4);
    printf("%d", max);


    printf("\n ");
    return 0;
}