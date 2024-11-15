#include <stdio.h>
int main(){
    int i,n,j,k,c=1;
	printf("Enter dimensions\n");
	scanf("%d",&n);
	int a[n][n];
	printf("\nEnter Elements\n");
	for(i=0;i<n;i++)
    for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    if((i==j&&a[i][j]!=1)||(i!=j&&a[i][j]!=0)){
        printf("Not an Identity Matrix");
        goto a;
    }
    printf("Identity Matrix");;
    a:
    return 0;
}