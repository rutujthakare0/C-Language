#include <stdio.h>
int main(){
    int i,j,n,s=0;
    printf("Enter order\n");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter Elements\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
    }}
    for(i=0;i<n;i++){
        s=s+a[n-i-1][i];
    }
    printf("Sum of left diagonal elements is %d",s);
    return 0;
}