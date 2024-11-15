#include <stdio.h>
int main(){
  int i,n,j,x=0;
	printf("Enter number of elements in array\n");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter Elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    for(i=0;i<n;i++){
    for(j=0;j<=i;j++)
    x=x+a[j];
    printf("%f ",(float)x/(i+1));
    x=0;
    }
    return 0;
}    