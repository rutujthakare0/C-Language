#include <stdio.h>
int main(){
int i,n,j,c=1,m;
    printf("Enter Rows\n");
    scanf("%d",&m);
    int a[m][m];
    n=m;
    for(j=0;j<=n/2;j++){
    for(i=j;i<n-j;i++)
        a[j][i]=c++;
    for(i=j+1;i<n-j;i++)
        a[i][n-j-1]=c++;
    for(i=n-j-2;i>=j;i--)
        a[n-j-1][i]=c++;
    for(i=n-j-2;i>j;i--)
        a[i][j]=c++;
    }
    for(i=0;i<m;i++){
        for(j=0;j<m;j++)
        printf("%d\t",a[i][j]);
        printf("\n");
    }   
return 0;
}