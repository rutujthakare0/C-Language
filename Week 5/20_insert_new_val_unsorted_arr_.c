#include <stdio.h>
int main(){
    int i,n,j,k,c,o;
	printf("Enter number of elements in array\n");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter Elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    printf("Enter Value");
    scanf("%d",&c);
    printf("Enter Position");
    scanf("%d",&o);
    int b[n+1];
    for(i=0;i<o-1;i++)
        b[i]=a[i];
    b[o-1]=c;
    for(i=o;i<n+1;i++)
        b[i]=a[i-1];   
    for(i=0;i<n+1;i++)
    printf("%d ",b[i]);
    return 0;
}