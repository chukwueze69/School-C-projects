#include <stdio.h>
int main() {
     int eta = 0;
     printf("quanti anni hai\n");
     scanf("%d",&eta);
     if(eta<=0) {
          printf("emm non sei nato ancora\n"); 
     }
     else if(eta<18) {
          printf("non puoi votare");
     }          
     else if(eta>=18) {
          printf("vota ma non la destra");
     }
     return 0;
}

