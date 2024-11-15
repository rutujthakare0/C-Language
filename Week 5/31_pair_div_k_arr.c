#include <stdio.h>
int main(){
    int i,n,j,k;
	printf("Enter number of elements in array(even)\n");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter Elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    printf("Enter k\n");
    scanf("%d",&k);    
    for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
        if((a[i]+a[j])%k!=0){
            printf("False");
            goto abc;
        }
    printf("True");
    abc:
    return 0;
}    