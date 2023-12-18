#include <stdio.h>
#include <string.h>
#define N 10
int main(){
    int x;
    char s1[N],s2[N],s3[N];
    printf("inserisci tre nomi\n");
    scanf("%s",s1);
    scanf("%s",s2);
    scanf("%s",s3);
    if(strcmp(s1,s2)==0||strcmp(s1,s3)==0||strcmp(s2,s3)==0)
    printf("ci sono due stringhe uguali\n");
    else
    printf("non ci sono due stringhe uguali\n");

}