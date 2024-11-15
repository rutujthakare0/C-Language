#include <stdio.h>
int main(){
	int n,i,t=0,j,m=0,k=0;
	printf("Enter string length\n");  // ({<[]>})
	scanf("%d",&n);
	char c[n+1];
    char b[n+1];
    printf("Enter string\n");
    scanf(" %[^\n]s",c);
    for(i=0;i<n-1;i++)
    for(j=0;j<n-i-1;j++)
        if(c[j]>c[j+1]){
            t=c[j];
            c[j]=c[j+1];
            c[j+1]=t;
    }
    for(i=0;i<n-1;i++){
        if(c[i+1]>c[i]){
            b[m]=c[i];
            m++;
        }
        b[n-1]=c[n-1];    
    }
    for(i=0;i<n;i++)
    if((b[i]<123&&b[i]>96)||(b[i]<91&&b[i]>64))
    k++;
    for(i=0;i<k;i++){
        printf("%c ",b[i]);
    }
    return 0;
}
