#include <stdio.h>
int main(){
	int n,i,k,c=0;
	printf("Enter number of elements in array\n");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter Elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nEnter number\n");
	scanf("%d",&k);
	for(i=0;i<n;i++){
		if(a[i]==k)
		c++;
	}
	printf("%d is repeated %d times",k,c);
	return 0;
}
