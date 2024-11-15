#include <stdio.h>
int main(){
    int i,n,j,k,c=0;
	printf("Enter number of elements in array\n");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter Elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    for(j=0;j<n-i-1;j++)
        if(a[j]>a[j+1]){
            k=a[j];
            a[j]=a[j+1];
            a[j+1]=k;
    }        
    for(i=0;i<n-1;i++)
    if(a[i+1]>a[i])
    c++;
    printf("%d",c+1);
    return 0;
}