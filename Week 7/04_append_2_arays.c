#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,i,k,j;
	printf("Enter array1 size");
	scanf("%d",&n);
	int*a=(int*)malloc(n*sizeof(int));
	printf("Enter elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter array2 size");
	scanf("%d",&k);
	int*b=(int*)malloc(k*sizeof(int));
	printf("Enter elements");
	for(i=0;i<k;i++)
	scanf("%d",&b[i]);
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	for(j=0;j<k;j++)
	printf("%d",b[j]);
	return 0;
}
