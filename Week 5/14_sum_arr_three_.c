#include <stdio.h>
int main(){
    int i,n,j,k,c;
	printf("Enter number of elements in array\n");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter Elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    printf("Enter number");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
    for(c=i+2;c<n;c++){
        if(a[i]+a[j]+a[c]==k){
            printf("%d & %d & %d",a[i],a[j],a[c]);
            i=n;
            goto abc;
        }
    }
    printf("False");
    abc:
    return 0;
}