#include <stdio.h>

void hello(char[], int); //function prototype

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

//? C function prototypes
   // Function declaration, w/o a body, before main()
   // Ensures that calls to a function are made with the correct arguments

   // IMPORTANT NOTES
   // Many C compilers do not check for parameter matching
   // Missing arguments will result in unexpected behavior
   // A function prototype causes the compiler to flag an error if arguments are missing

   // ADVANTAGES
   // 1. Easier to navigate a program w/ main() at the top
   // 2. Helps with debugging
   // 3. Commonly used in header files

   char name_1[] = "And";
   int age_1 = 27;

   hello(name_1, age_1);


    printf("\n ");
    return 0;
}

void hello(char name[], int age)
{
   printf("\n Hello %s", name);
   printf("\n You are %d years old", age);
}