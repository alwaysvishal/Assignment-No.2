Question-1
// Vishal Gupta
// ROLL NO 2303510100108
//1. Create a program that determines whether a given year is a leap year or not
#include <stdio.h>

int main() {
   int a;
   printf("Enter the year: ");
   scanf("%d",&a);
   if(a%4==0){
       printf("Given year is a leap year");
   }
   else{
       printf("Given year is not a leap year");
   }
    return 0;
}
