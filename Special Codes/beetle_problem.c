#include <stdio.h>
int main(){
    int m,i,j,c,d,n,k;
    printf("Enter length of side and number of jumps\n");
    scanf("%d%d",&m,&n);
    int a[m][m],b[m][m];
    printf("Enter Input\n");
    for(i=0;i<m;i++){
        for(j=0;j<m;j++)
            scanf("%d%d",&a[i][j],&b[i][j]);
        printf("\n");
    }
    printf("Enter initial position");
    scanf("%d%d",&c,&d);
    for(i=0;i<n;i++){
        k=c-1;
        c=a[k][d-1];
        d=b[k][d-1];
    }
    printf("\n%d,%d",c,d);
    return 0;
}