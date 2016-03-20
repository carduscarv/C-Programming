#include <stdio.h>
int main() {
    int i, l, spaces;
    int m = 5; //set brp jumlah bintang
    int b = m;
    for (i=1; i <= b; i++) {

         for (spaces=1; spaces <= m; spaces++) {
             printf(" ");
         }
         for (l=1; l <= i; l++) {
             printf("*");
             printf(" ");
         }
        printf("\n");
        m = m - 1;
   }

  return 0;
}