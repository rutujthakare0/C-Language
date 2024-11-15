#include <stdio.h>
int main(){
    int i,n,m,a2=0,a1=0;
	printf("Enter number of elements in array 1\n");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter Elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    printf("Enter number of elements in array 2\n");
	scanf("%d",&m);
	int b[m];
	printf("\nEnter Elements\n");
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);    
    for(i=0;i<n;i++)
        a1 = a1*10 + a[i];
    for(i=0;i<m;i++)
        a2 = a2*10 + b[i];
    printf("Sum is %d",a1+a2);       
    return 0;
}