#include <stdio.h>
int main(){
    int i,n,j,k,c;
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
    k=0;
    printf("Enter Value");
    scanf("%d",&c);
    int b[n+1];
    for(i=0;i<n;i++){
        if(a[i]<c){
        b[i]=a[i];
        k++;
        }}
        b[k]=c;
    for(i=k;i<n+1;i++){
        b[i+1]=a[i];
    }
    for(i=0;i<n+1;i++)
    printf("%d ",b[i]);
    return 0;
}