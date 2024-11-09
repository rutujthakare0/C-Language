//c program to evaluate equations.
#include <stdio.h>
#include <math.h>
int main(){
    int u,a,t,A,B,C,P;
    printf("Enter u,a,t,A,B,C,P");
    scanf("%d%d%d%d%d%d%d",&u,&a,&t,&A,&B,&C,&P);
    printf("V = %d\n",u+a*t);
    printf("S = %f\n",(float)(u*t+0.5*a*t*t));
    printf("T = %f\n",(float)(2*A+sqrt(B)+9*C));
    printf("H = %f",sqrt(B*B+P*P));
    return 0;
}