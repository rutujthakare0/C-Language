#include <stdio.h>
int main(){
	int n,i,t,j,k;
	printf("Enter number of elements in array\n");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter Elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nEnter k");
	scanf("%d",&k);
	for(i=0;i<n-1;i++){
	for(j=0;j<n-i-1;j++)
		if(a[j]>a[j+1]){
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}}
	printf("%d largest value = %d\n%d smallest value = %d",k,a[n-k],k,a[k-1]);
	return 0;
}
