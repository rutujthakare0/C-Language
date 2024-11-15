#include <stdio.h>
int main(){
    int i,n,j,o=0,e=0;
	printf("Enter number of elements in array\n");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter Elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    int odd[n];
    int even[n];
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            even[e]=a[i];
            e++;
        }else{
            odd[o]=a[i];
            o++;
        }
    }
    printf("Even Array = ");
    for(i=0;i<e;i++){
        printf("%d,",even[i]);
    }
    printf("\nOdd Array = ");
    for(i=0;i<o;i++){
        printf("%d,",odd[i]);
    }
    return 0;
}