
#include <stdio.h>
#include <ctype.h> // for using the function "toupper()" to transform to Upper case
#include <stdbool.h> // for "bool" type variables

int main(){

//? C if statements
printf("\n---");
printf("C if statements");
printf("---\n");
    
    int age;
    
    printf("\nEnter your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("You are now signed up!");
    }
    else if(age == 0){
        printf("You can't sign up! You were just born!");
    }
    else if(age < 0){
        printf("You haven't been born yet!");
    }
    else{
        printf("You are too young to sign up!");
    }

//? C switch statements
printf("\n---");
printf("C switch statements");
printf("---\n");

    // switch = A more efficient alternative to using many "else if" statements
    //          allows a value to be tested for equality against many cases

   char grade;
   printf("\nEnter a letter grade (Just one letter): \n");
   scanf(" %c", &grade); // https://stackoverflow.com/questions/36504135/whitespace-before-c-specification-in-the-format-specifier-of-scanf-function-in
   //! The SPACE in " %c" is important beacuse it means "skip all whitespace" from the current position on.

   switch(grade){
      case 'A':
         printf("Perfect!\n");
         break;
      case 'B':
         printf("You did good!\n");
         break;
      case 'C':
         printf("You did okay!\n");
         break;
      case 'D':
         printf("At least it's not an F!\n");
         break;
      case 'F':
         printf("YOU FAILED!\n");
         break;
      default:
         printf("Please enter only valid grades");
         break;
   }

//? C temperature conversion program
printf("\n---");
printf("C temperature conversion program");
printf("---\n");
    
    float temp;
    char unit;

    printf("\nIs the temperature in (F/f) or (C/c)?: ");
    scanf(" %c", &unit);

    unit = toupper(unit); // #include <ctype.h> 

    if(unit == 'C'){
        printf("\nEnter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temp in Farenheit is: %.1f", temp);
    }
    else if(unit == 'F'){
        printf("\nEnter the temp in Farenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temp in Celsius is: %.1f", temp);
    }
    else{
        printf("\n %c is not a valid unit of measurement", unit);
    }

//? C AND logical operator &&
printf("\n---");
printf("C AND logical operator &&");
printf("---\n");

    // logical operators = && (AND) checks if two or more conditions are true
    
    float temp_1 = 25;
    bool sunny = true;

    if(temp_1 >= 0 && temp_1 <= 30 && sunny){
        printf("\n The weather is good!");
    }
    else{
        printf("\n The weather is bad!");
    }

//? C OR logical operator ||
printf("\n---");
printf("C OR logical operator ||");
printf("---\n");

// logical operators = || (OR) checks if at least one codition is true
    
    float temp_2 = 25;

    if(temp_2 <= 0 || temp_2 >= 30){
        printf("\nThe weather is bad!");
    }
    else{
        printf("\nThe weather is good!");
    }

//? C NOT logical operator !
printf("\n---");
printf("C NOT logical operator !");
printf("---\n");

    // logical operators = ! (NOT) reverses the state of a condition
    
    bool sunny = false;
    
    if(!sunny){
        printf("\nIt's cloudy outside!");
    }
    else{
        printf("\nIt's sunny outside!");
    }

// //? C #
// printf("\n---");
// printf("#");
// printf("---\n");

// //? C #
// printf("\n---");
// printf("#");
// printf("---\n");

// //? C #
// printf("\n---");
// printf("#");
// printf("---\n");

// //? C #
// printf("\n---");
// printf("#");
// printf("---\n");


printf("\n");
    return 0;
}