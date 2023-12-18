#include<stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 100 
int main(){
    srand(time(NULL));
    int i,n,a[N];
    printf("quante posizioni vuoi caricare");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        a[i]=rand()%(80-20+1)+20;
        printf("%d\n",a[i]);
    }

}