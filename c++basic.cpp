// c++ basic
#include <iostream> //header file--------------------------------------------------------------------------------------------
int main()
{
    // this is a comment
    std::cout << "Hello World." << '\n';
    std::cout << "C++ rocks!";

   char mychar{'a'};
   int  myint{123};
   double   mydouble{456.78};
   std::cout << "The value of a char variable is: " << mychar << '\n';
   std::cout << "The value of an int variable is: " << myint << '\n';
   std::cout << "The value of a double variable is: " << mydouble << '\n';    
}
//The assignment operator = assigns a value to a variable / object: ----------------------------------------------------------
int main()
{
    char mychar = 'c';    // define a char variable mychar
    mychar = 'd';         // assign a new value to mychar
    int x = 123;          // define an integer variable x
    x = 456;              // assign a new value to x
    int y = 789;          // define a new integer variable y
    y = x;                // assing a value of x to it
}
#Arithmetic Operators -----------------------------------------------------------------------------------------------------
#We can do arithmetic operations using arithmetic operators. Some of them are:
+ // addition
- // subtraction
* // multiplication
/ // division
% // modulo
    ------------------------------------------------------------------------------------------------------------------------
#include <iostream> //header file-------------------------------------------------------------------------------------------
int main()
{
    int x = 123;
    int y = 456;
    int z = x + y; // add
    z = x - y; // subtract
    z = x * y; // multi.
    z = x / y; // division
    std::cout << "The value of z is: " << z << '\n';
}
