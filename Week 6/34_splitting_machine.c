#include <stdio.h>
int main(){
	int n,i,t=1,j,k,m=0;
	printf("Enter string length\n");  
	scanf("%d",&n);
	char c[n+1];
    printf("Enter string\n");
    scanf(" %[^\n]s",c);
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            for(k=0;k<t;k++){
                printf("%c",c[j+k]);
            }
            printf("\n");
        }
        t++;
    }
    return 0;
}