#include <stdio.h>
int main(){
    int i,n,j,k,x;
	printf("Enter number of elements in array'\n");
	scanf("%d",&n);
	int a[n];
    int b[n];
    for(i=0;i<n;i++)
		b[i]=0;
	printf("\nEnter Elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    printf("Enter x\n");
    scanf("%d",&x);    
    for(i=0;i<n;i++){
    k=(a[i]+x)/2;
    for(j=0;j<n;j++)
    if(k==a[j])
    b[i]++;
    }
    for(i=0;i<n;i++)
    printf("%d ",b[i]);
    return 0;
}    