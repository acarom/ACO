// C Basics 5 (general arrays)
#include <stdio.h>
#include <string.h>

int main()
{

//? C arrays
   // array = a data structure that can store many values of the same data type.

   //double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};
   double prices[5];

   prices[0] = 5.0;
   prices[1] = 10.0;
   prices[2] = 15.0;
   prices[3] = 25.0;
   prices[4] = 20.0;

   printf("$%.2lf", prices[0]);

//? C print an array with loop

   //double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 30.0};
   //printf("%d bytes\n", sizeof(prices));

   for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
   {
      printf("$%.2lf\n", prices[i]);
   }
  
//? C 2D arrays 

  // 2D array = an array, where each element is an entire array
   //            useful if you need a matrix, grid, or table of data
   /*
   int numbers[2][3] = {
                        {1, 2, 3},
                        {4, 5, 6}
                       };
   */
   int numbers[2][3];

   int rows = sizeof(numbers)/sizeof(numbers[0]);
   int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

   printf("rows: %d\n", rows);
   printf("columns: %d\n", columns);

   numbers[0][0] = 1;
   numbers[0][1] = 2;
   numbers[0][2] = 3;
   numbers[1][0] = 4;
   numbers[1][1] = 5;
   numbers[1][2] = 6;

   for(int i = 0; i < rows; i++)
   {
      for(int j = 0; j < columns; j++)
      {
         printf("%d ", numbers[i][j]);
      }
      printf("\n");
   }

//? C array of strings

   char cars[][10] = {"Mustang","Corvette","Camaro"};

   // This is the action for strings: cars[0] = "Tesla";
   strcpy(cars[0], "Tesla");

   for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
   {
      printf("%s\n", cars[i]);
   }

//? C swap values of two variables 


       //------- Example 1 -------
   //char x = 'X';
   //char y = 'Y';
   //char temp;

   //temp = x;
   //x = y;
   //y = temp;

   //printf("x = %c\n", x);
   //printf("y = %c\n", y);

   //------- Example 2 -------
   char x[15] = "water";
   char y[15] = "soda";
   char temp[15];

   strcpy(temp, x);
   strcpy(x, y);
   strcpy(y, temp);

   printf("x = %s\n", x);
   printf("y = %s\n", y);

//? C structs



   printf("\n");
   return 0;
}