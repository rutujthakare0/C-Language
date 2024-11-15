#include <stdio.h>
int main(){
    int i,n,j,k;
	printf("Enter number of elements in array\n");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter Elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    int b[n];
    for(i=0;i<n;i++){
        b[i]=a[i];
    }
    for(i=0;i<n;i++){
        printf("%d",b[i]);
    }
    return 0;
}