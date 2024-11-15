#include <stdio.h>
int main(){
    int i,n,j,c=0,b=0;
	printf("Enter number of elements in array\n");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter Elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    for(i=0;i<n/2;i++)
    c=c+a[i];
    for(i=n/2;i<n;i++)
    b=b+a[i];
    if(b==c)
    printf("Balanced array");
    else if(b>c)
    printf("Add %d to any element in first half to balance the array",b-c);
    else
    printf("Add %d to any element in second half to balance the array",c-b);
    return 0;
}    