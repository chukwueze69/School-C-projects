#include <stdio.h>
int main() {
     printf("inserisci valore iva");
     float iva = 0;
     scanf("%f",&iva);
     float pc = 0;
     float pn = 0;
     printf("inserisci il prezzo netto del libbro");
     scanf("%f",&pn);
     pc = pn*119/100;
     printf("il prezzo complessivo del libro è:%f",pc);

}