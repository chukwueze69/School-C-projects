#include <stdio.h>
#include <string.h>
#define N 28
int main(){
    char s[N],c,alf[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
    int i,j,cf=0;
    printf("inserisci un nome \n");
    
    scanf(" %s",&s);
        for(i=0;i<strlen(alf);i++){
        cf=0;
        for(j=0;j<strlen(s);j++)
        if(alf[i]==s[j])
        cf++;

        
        printf("in tutto le occorenze di %c in %s sono %d\n ",alf[i],s,cf);
        
    }

}