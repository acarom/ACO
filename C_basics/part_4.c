// C Basics 4 (strings, loops and breaks)
#include <stdio.h>
#include <string.h> // for "string functions" 

int main()
{
//? C string functions 
    // #include <string.h>
    char string1[] = "Bro";
    char string2[] = "Code";

    //strlwr(string1);                              // converts a string to lowercase
    //strupr(string1);                              // converts a string to uppercase
    //strcat(string1, string2);                     // appends string2 to end of string1
    //strncat(string1, string2, 1);                 // appends n characters from string2 to string1
    //strcpy(string1, string2);                     // copy string2 to string1
    //strncpy(string1, string2, 2);                 // copy n characters of string2 to string1

    //strset(string1, '?');     //sets all characters of a string to a given character
    //strnset(string1, 'x', 1); //sets first n characters of a string to a given character
    //strrev(string1);          //reverses a string 
    //int result = strlen(string1);                 // returns string length as int
    //int result = strcmp(string1, string2);        // string compare all characters
    //int result = strncmp(string1, string2, 1);    // string compare n characters
    //int result = strcmpi(string1, string1);       // string compare all (ignore case)
    //int result = strnicmp(string1, string1, 1);   // string compare n characters (ignore case)    
    printf("%s", string1);  
    /*
    if(result == 0)
    {
       printf("These strings are the same");
    }
    else
    {
       printf("These strings are not the same");
    }
    */

//? C for-loops

   // for loop = repeats a section of code a limited amount of times
   for(int i = 1; i <= 10; i++)
   {
      printf("%d \n", i);
   }

//? C while loops

    // while loop = repeats a section of code possibly unlimited times. 
    // WHILE some condition remains true
    // a while loop might not execute at all
    char name[25];
    printf("\nWhat's your name?: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0)
    {
       printf("\nYou did not enter your name");
       printf("\nWhat's your name?: ");
       fgets(name, 25, stdin);
       name[strlen(name) - 1] = '\0';
    }
    printf("Hello %s", name);

//? C do while loop
   // while loop = checks a condition, THEN executes a block of code if condition is true
   // do while loop = always executes a block of code once, THEN checks a condition

   int number = 0;
   int sum = 0;

   do {
      printf("\n Enter a # above 0: ");
      scanf("%d", &number);
      if(number > 0)
      {
         sum += number;
      }
   } while (number > 0);
   
   printf("sum: %d", sum);

//? C nested loops
   //nested loop = a loop inside of another loop

   int rows;
   int columns;
   char symbol;

   printf("\nEnter # of rows: ");
   scanf("%d", &rows);

   printf("Enter # of columns: ");
   scanf("%d", &columns);

//    scanf("%c"); //clears \n from buffer

//    printf("Enter a symbol to use: ");
//    scanf("%c", &symbol);

   for(int i = 1; i <= rows; i++)
   {
      for(int j = 1; j <= columns; j++)
      {
         printf("%d", j);
      }
      printf("\n");
   }

//? C break vs continue

   // continue = skips rest of code & forces the next iteration of the loop
   // break = exits a loop/switch

   for(int i = 1; i <= 20; i++)
   {
      if(i == 13)
      {
         continue;
         //break;
      }
      printf("%d\n", i);
   }



    printf("\n ");
    return 0;
}

