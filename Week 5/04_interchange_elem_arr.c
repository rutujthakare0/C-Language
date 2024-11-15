#include <stdio.h>
int main(){
	int n,i,t,j;
	printf("Enter number of elements in array (even)\n");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter Elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
	for(j=0;j<n-i-1;j=j+2){
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}}
		for(i=0;i<n;i=i+2)
			printf("%d %d\n",a[i],a[i+1]);
	return 0;
}