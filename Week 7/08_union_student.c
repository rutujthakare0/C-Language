#include <stdio.h>
#include <string.h>
union student{
    char name[50];
    int rollno;
    int pm,cm,mm,bm,am;
}s;
int main(){
    char ch[50];
    printf("Enter name\n");
    scanf(" %[^\n]s",ch);
    strcpy(s.name,ch);
    printf("Enter rollno\n");
    scanf("%d",&s.rollno);
    printf("Enter marks in 5 subs\n");
    scanf("%d",&s.pm);
    scanf("%d",&s.cm);
    scanf("%d",&s.mm);
    scanf("%d",&s.bm);
    scanf("%d",&s.am);
    printf("Percentage marks: %f %%",(float)(s.pm+s.cm+s.mm+s.bm+s.am)/5);
    return 0;
}