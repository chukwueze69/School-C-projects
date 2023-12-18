#include <stdio.h>
#define N 10
int main(){
    int A[N],n,i,ca,cb,cc;
    printf("carica un vettore e lo ordinerò secondo le regole citate nel problema");
    for(i=0;i<N;i++){
        printf("inserisci valore");
        scanf("%d",&A[i]);

    }
    for(i=0;i<N;i++){
        if(A[0]>A[i])
        ca=ca+1;
        if(A[0+1]<A[i])
        cb=cb+1;
        if(A[0+2]>A[i])
        cc=cc+1;
        

        

    }
    if(ca+cb+cc==N)
    printf("ok");
}