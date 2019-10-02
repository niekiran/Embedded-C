/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main()
{
   char a1 = 'A';
   /*
   char a2 = 'p';
   char a3 = 'p';
   char a4 = 'l';
   char a5 = 'e';
   char a6 = ':'; */
   //char a7 = ')';



   unsigned long long int addressOfa1 =  ( unsigned long long int  )&a1;

   printf("Address of variable a1 = %I64x\n",addressOfa1);




    return 0;
}



