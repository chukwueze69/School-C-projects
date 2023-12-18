#include <stdio.h>
int main() {
     printf("inserisci due numeri e ti diro se il primo è il quadrato del secondo");
     float num1 = 0;
     float num2 = 0;
     scanf("%f%f",&num1,&num2);
     if(num1==num2*num2 | num2==num1*num1)
     printf("si sono uno il quadrato del altro\n");
     else 
     printf("no non sono uno il quadrato del altro\n");
     

}