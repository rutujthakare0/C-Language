#include<stdio.h>
int fun(int a,int b){
    if(b==0)
        return a;
    return fun(b,a%b);
}
int main(){
    int a,b;
    printf("Enter numbers\n");
    scanf("%d%d",&a,&b);
    printf("The GCD of %d and %d is %d",a,b,fun(a,b));
    return 0;
}