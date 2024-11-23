#include <stdio.h>
int avg(int*p,int n){
	int i,k=0;
	float j;
	for(i=0;i<n;i++)
	k+=p[i];
	j=k/n;
	return j;
}
int main(){
	int n,i,k;
	printf("Enter array size");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	k=avg(a,n);
	printf("Average of array elements is %d",k);
	return 0;
}
