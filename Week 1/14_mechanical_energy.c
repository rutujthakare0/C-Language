// program to calculate mechanical energy
#include <stdio.h>
int main(){
    int m,h,v;
    printf("Enter m,h,v");
    scanf("%d%d%d",&m,&h,&v);
    printf("E = %f",(float)(m*9.8*h + 0.5*m*v*v));
    return 0;
}