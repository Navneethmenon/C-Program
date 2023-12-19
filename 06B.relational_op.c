/* 
 * relational operators
 */
#include <stdio.h>

int main()
{
   int a = 10, b = 30, c = 30;

   if (a < b) {
       printf("\n%d < %d", a, b);
   }

   if (b == c) {
       printf("\n%d == %d", b, c);
   }

   if (a > b) {
       printf("\na is greater than b");
   } else {
       printf("\na is lesser than b");
   }
   if (a == b) {
       // block 1
   } else if (a > b) {
       // block 2
   } else {
       // block 3
   }
}

// >, <, ==, !=, <=, >=

