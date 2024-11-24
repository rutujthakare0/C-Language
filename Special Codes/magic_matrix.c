#include <stdio.h>
int main(){
    int n,x,y,i,j,c=1;
    printf("Enter dimension (odd numbers)");
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    a[i][j]=0;
    a[n/2][n-1]=c++;
    x=n/2;
    y=n-1;
    for(i=0;i<n*n-1;i++){
        x--;
        y++;
        abc:
        if(x==-1&&y==n){
            x=0;
            y=n-2;
        }else if(x==-1){
            x=n-1;
        }else if(y==n){
            y=0;
        }
        if(a[x][y]!=0&&x!=-1&&y!=n){
            x=x+1;
            y=y-2;
            goto abc;
        }
            a[x][y]=c++;
    }
    for(i=0;i<n;i++){
    for(j=0;j<n;j++)
    printf("%d\t",a[i][j]);
    printf("\n\n");
    }
    return 0;
}