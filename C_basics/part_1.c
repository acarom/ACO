
#include <stdio.h>
#include <stdbool.h> // for "bool" type variables
#include <string.h>  // for the function "strlen()"
#include <math.h> // for math functions 

int main(){

//? C comments & escape sequences
printf("\n---");
printf("C comments & escape sequences");
printf("---\n");

    // This is a comment
    /*
        This    is
        a  multiline comment
    */

    /* escape sequence = character combination consisting of a backslash \ 
                         followed by a letter or combination of digits.
                         They specify actions within a line of text (string)
                         \n = newline
                         \t = tab 
                         \\ = display \
                         \' = display '
                         \" = display "
    */

    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");
    printf("\"I like Pizza\" -Bro Code probably");

//? C variables
printf("\n---");
printf("C variables");
printf("---\n");

    // variable =   Allocated space in memory to store a value.
    //                     We refer to a variable's name to access the stored value.
    //                     That variable now behaves as if it was the value it contains.
    //                     BUT we need to declare what type of data we are storing.

    int x;              //declaration
    x = 123;            //initialization
    int y = 321;        //declaration + initialization

    int age = 21;       //integer
    float gpa = 2.05;   //floating point number
    char grade = 'C';   //single character
    char name[] = "Bro";//array of characters
    
    // % = format specifier
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your gpa is %f\n", gpa);

//? C data types
printf("\n---");
printf("C data types");
printf("---\n");

    char a = 'C';                // single character    %c
    char b[] = "Bro";            // array of characters %s  

    float c = 3.141592;           // 4 bytes (32 bits of precision) 6 - 7 digits %f     1e-6
    double d = 3.141592653589793; // 8 bytes (64 bits of precision) 15 - 16 digits %lf  1e-15
    
    // for booleans we need the stdbool.h library
    bool e = true;                // 1 byte (true or false) %d
    
    char f = 120;                 // 1 byte (-128 to +127) %d or %c 1.27e3
    unsigned char g = 255;        // 1 byte (0 to +255) %d or %c    2.55e3

    short h = 32767;              // 2 bytes (−32,768 to +32,767) %d    3.27e4
    unsigned short i = 65535;     // 2 bytes (0 to +65,535) %d          6.55e4

    int j = 2147483647;           // 4 bytes (-2,147,483,648 to +2,147,483,647) %d  2.14e9
    unsigned int k = 4294967295;  // 4 bytes (0 to +4,294,967,295) %u               4.29e9

    long long int l = 9223372036854775807; // 8 bytes (-9 quintillion to +9 quintillion) %lld   9.2e18
    unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to +18 quintillion) %llu    1.8e19

    printf("%c\n", a);  // char
    printf("%s\n", b);  // character array
    printf("%f\n", c);  // float
    printf("%lf\n", d); // double
    printf("%d\n", e);  // bool
    printf("%d\n", f);  // char as numeric value
    printf("%d\n", g);  // unsigned char as numeric value
    printf("%d\n", h);  // short
    printf("%d\n", i);  // unsigned short
    printf("%d\n", j);  // int
    printf("%u\n", k);  // unsigned int
    printf("%lld\n", l);  // long long int
    printf("%llu\n", m);  // unsigned long long int

//? C format specifiers
printf("\n---");
printf("C format specifiers");
printf("---\n");

  // format specifier % = defines and formats a type of data to be displayed

    // %c = character
    // %s = string (array of characters) 
    // %f = float
    // %lf = double
    // %d = integer

    // %[+/-][#].[#][type]
    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align
    
    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%8.2f\n", item1);
    printf("Item 2: $%8.2f\n", item2);
    printf("Item 3: $%8.2f\n", item3);

//? C constants
printf("\n---");
printf("C constants");
printf("---\n");
    // constant = fixed value that cannot be altered by the program during its execution

    const float PI = 3.14159;

    //PI = 420.69; YOU CAN'T CHANGE THIS

    printf("%f", PI);

//? C arithmetic operators
printf("\n---");
printf("C arithmetic operators");
printf("---\n");

    // arithmetic operators
 
    // + (addition)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (modulus)
    // ++ increment
    // -- decrement
 
    int x_1 = 5;
    int y_1 = 2;
    
    // int z = x + y;
    // int z = x - y;
    // int z = x * y;
    // float z = x / (float) y;
     int z = x_1 % y_1;
    // x++;
    // y--;

    printf("%d", x_1);
    printf("%d", y_1);
    printf("%d", z);

//? C augmented assignment operators
printf("\n---");
printf("C augmented assignment operators");
printf("---\n");

    // augmented assignment operators = used to replace a statement where an operator
    //                                  takes a variable as one of its arguments
    //                                  and then assigns the result back to the same variable
    //                                  x = x + 1
    //                                  x+=1
 
    int x_2 = 10;
 
    //x = x + 2;
    x_2 += 2;
 
    //x = x - 3;
    //x-=3;
 
    //x = x * 4;
    //x*=4;
 
    //x = x / 5;
    //x/=5;
 
    //x = x % 2;
    //x%=2;
 
    printf("%d", x);

//? C user input
printf("\n---");
printf("C user input");
printf("---\n");



    char name_1[25]; //bytes
    int age_1;

    printf("\nWhat's your name?");
    
    // scanf("%s", &name_1); // limited by whitespaces

    // for string length we need the string.h library
    fgets(name_1, 25, stdin);     // limited by just the size
    name_1[strlen(name_1)-1] = '\0';

    printf("How old are you?");
    scanf("%d", &age_1);

    printf("\nHello %s, how are you?", name_1);
    printf("\nYou are %d years old", age_1);

//? C math functions
printf("\n---");
printf("C math functions");
printf("---\n");

    // library math.h is need it.
    double A = sqrt(9);
    double B = pow(2, 4);
    int C = round(3.14); 
    int D = ceil(3.14);  // round the number to the uppest
    int E = floor(3.99); // round the number to the lowest
    double F = fabs(-100);
    double G = log(3);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);
    
    printf("\n%lf", A);

//? C circle circumference program
printf("\n---");
printf("C circle circumference program");
printf("---\n");

    //const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nEnter the radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\ncircumference: %lf", circumference);
    printf("\narea: %lf", area);


printf("\n");
    return 0;
}