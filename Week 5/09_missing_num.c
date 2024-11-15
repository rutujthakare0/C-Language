#include <stdio.h>
int main(){
	int n,i,t,j,k=1;
	printf("Enter number of elements in array\n");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter Elements\n");
	for(i=0;i<n-1;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
	for(j=0;j<n-i-1;j++)
		if(a[j]>a[j+1]){
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}}
	for(i=0;i<n;i++){
		if(a[i]==k){
			k++;
		}else{
			printf("%d",k);
		}
	}
	return 0;
}
