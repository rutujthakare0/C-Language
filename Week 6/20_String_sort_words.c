#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int w,k=0,i,m=0,n=0,j;
    printf("Enter string length");
    scanf("%d",&w);
    getchar();
    char c[w+1];
    fgets(c,w+1,stdin);
    for(i=0;c[i]!='\0';i++)
    if(c[i]==' ')
    k++;
    k++;
    char a[k][35];
    for(i=0;c[i]!='\0';i++){
        if(c[i]!=' '){
            a[m][n]=c[i];
            n++;
        }
        else{
            a[m][n]='\0';
        m++;
        n=0;
        }
    }
    char rutuj[34];
    for(j=0;j<m;j++){
        for(i=0;i<m-1;i++){
        if(strcmp(a[i],a[i+1])>0){
        strcpy(rutuj,a[i]);
        strcpy(a[i],a[i+1]);
        strcpy(a[i+1],rutuj);
    }}}
    for(i=0;i<=m;i++){
    for(j=0;a[i][j]!='\0';j++){
        printf("%c",a[i][j]);
        }
    printf("\n");
    }
    return 0;
}