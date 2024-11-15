#include <stdio.h>
int main(){
	int n,i,t=0,j,m=-1,k;
	printf("Enter string length\n");
	scanf("%d",&n);
	char c[n+1];
    printf("Enter string\n");
    scanf(" %[^\n]s",c);
    for(i=0;i<n+1;i++){
        if(c[i]!=' '&&c[i]!='\0')
        t++;
        else if (c[i]==' '||c[i]=='\0'){
            if(t>=m){
                m=t;
                k=i;
            }
            t=0;
        }   // rutuj 
    }       // 012345
    printf("Largest word is: ");
    for(i=k-m;i<k;i++)
    printf("%c",c[i]);
    printf("\n");
    m=n+1;
    t=0;
    for(i=0;i<n+1;i++){
        if(c[i]!=' '&&c[i]!='\0')
        t++;
        else if (c[i]==' '||c[i]=='\0'){
            if(t<=m){
                m=t;
                k=i;
            }
            t=0;
        }
    }
    printf("Shortest word is: ");
    for(i=k-m;i<k;i++)
    printf("%c",c[i]);
    return 0;
}