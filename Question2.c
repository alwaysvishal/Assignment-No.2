// Vishal Gupta
// ROLL NO 2303510100108
//2. Implement a simple calculator program that takes two number and an operator (+,-,*,/) as input and performs the corresponding operations.
#include <stdio.h>
int main() {
    char c;
   printf("Enter any one operation: ");
   scanf("%c",&c);
   int a,b;
   printf("Enter the two number: ");
   scanf("%d %d",&a,&b);
   
   if(c=='+'){
       printf("Sum of the number is %d",a+b);
   }
   else if(c=='-'){
       printf("substraction of the number is %d",a-b);
   }
   else if(c=='*'){
       printf("Product of the given number is %d",a*b);
   }
   else if(c=='/'){
       printf("Divide of the given number is %d",a/b);
   }
   else{
       printf("I am still learning");
   }
    return 0;
}
